#include "stdafx.h"
#include "ApngDemo.h"
#include "GdiplusAutoStartup.hpp"
#include "ApngLoader.h"

#define MAX_LOADSTRING 100

// 全局变量: 
CApngLoader g_apngLoader;
UINT32      g_nCurrentFrameID = 0;


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // 加载图片
    GDIPLUS_AUTO_STARTUP;
    WCHAR szPath[MAX_PATH + 1];
    GetModuleFileName(NULL, szPath, _countof(szPath));
    PathRemoveFileSpec(szPath);
    PathAppend(szPath, L"\\..\\..\\..\\test\\clock.png");
    if (!g_apngLoader.LoadAPNG(szPath))
    {
        MessageBox(NULL, L"Cannot load image", L"Error", MB_ICONERROR | MB_OK);
        return 1;
    }

    // 消息循环、其它代码

    return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_CREATE:
        //first frame
        SetTimer(hWnd, 1234, 500, NULL);
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // 
            RECT rcWin;
            GetClientRect(hWnd, &rcWin);
            Rect rcBg(0, 0, rcWin.right - rcWin.left, rcWin.bottom - rcWin.top);
            
            //双缓冲，去闪烁
            HDC hMemDC = ::CreateCompatibleDC(hdc);
            HBITMAP hBmpOffscreen = ::CreateCompatibleBitmap(hdc, rcBg.Width, rcBg.Height);
            HBITMAP hBmpOld = (HBITMAP)::SelectObject(hMemDC, hBmpOffscreen);


            Graphics gr(hMemDC);
            gr.Clear(0xFFFFFFFFu);

            UINT32 nDelayMS = 0;
            Bitmap* pBmp = g_apngLoader.GetFrameAt(g_nCurrentFrameID, nDelayMS);
            if (pBmp)
            {

                Rect rc(0, 0, rcWin.right - rcWin.left, rcWin.bottom - rcWin.top);
                rc.Offset((rc.Width - (INT)pBmp->GetWidth()) / 2, (rc.Height - (INT)pBmp->GetHeight()) / 2);
                rc.Width = pBmp->GetWidth();
                rc.Height = pBmp->GetHeight();
                gr.DrawImage(pBmp, rc);
            }

            BitBlt(hdc, 0, 0, rcBg.Width, rcBg.Height, hMemDC, 0, 0, SRCCOPY);
            ::SelectObject(hMemDC, hBmpOld);
            DeleteObject(hBmpOffscreen);
            DeleteDC(hMemDC);

            EndPaint(hWnd, &ps);

            //next frame
            SetTimer(hWnd, 1234, nDelayMS, NULL);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    case WM_ERASEBKGND:
        return 1;
    case WM_TIMER:
        if (wParam == 1234)
        {
            //next frame, loop, update
            g_nCurrentFrameID++;
            g_nCurrentFrameID %= g_apngLoader.GetFrameCount();
            RECT rc;
            GetClientRect(hWnd, &rc);
            InvalidateRect(hWnd, &rc, TRUE);
        }
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

