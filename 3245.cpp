#include<bits/stdc++.h>
using namespace std;
int a,m[1000],q[1000][1000],t=0,Q[1000][1000],q1[1000],_,h,w[1000],lt,wlt[1000];
bool aa;
char ml[7]= {'1'};
int mll;
void ENQUEUE() {
	aa=0;//�����
	for(int b=0; b<t; b++) {
		for(int b1=0; b1<m[b]; b1++) {
			if(mll==q[b][b1]) {
				_=b;
				break;//�ж�������������
			}
		}
	}
	for(int b=0; b<h; b++) {
		if(q1[b]==_) {
			aa=1;//Ѱ������Ƿ����������
			break;//�ҵ�����
		}
	}
	if(aa!=1) {
		q1[h]=_;//û�ҵ�����ĩβ����
		h++;
	}
	Q[_][w[_]]=mll;//��ֵ����Ӧ�����Ӧλ��
	w[_]++;//�����������ĳ���
}
void DEQUEUE() {
	cout<<Q[q1[lt]][wlt[q1[lt]]]<<endl;//�����һ���������+��ţ�
	w[q1[lt]]--;//���� ���鳤��--
	wlt[q1[lt]]++;//�����߱��+1
	if(w[q1[lt]]==0) {
		lt++;//����������û����ʱ���������+1
	}
}
int main() {
	int bbb;
	while(1) {
		a=0;
		t=0;
		_=0;
		h=0;
		lt=0;
		mll=0;
		for(int asd=0; asd<1000; asd++) {
			m[asd]=0;
			q1[asd]=0;
			w[asd]=0;
			wlt[asd]=0;
			for(int asd11=0; asd11<1000; asd11++) {
				q[asd][asd11]=0;
				Q[asd][asd11]=0;
			}
		}
		ml[0]=0;
		ml[1]=0;
		ml[2]=0;
		ml[3]=0;
		ml[4]=0;
		ml[5]=0;
		ml[6]=0;
		aa=0;
		bbb++;
		cin>>t;
		if(t==0) {
			break;
		}
		cout<<"Scenario #"<<bbb<<endl;
		for(int a=0; a<t; a++) {
			cin>>m[a];
			for(int a1=0; a1<m[a]; a1++) {
				cin>>q[a][a1];
			}
		}
		while(ml[0]!='S'&&ml[1]!='T'&&ml[2]!='O'&&ml[3]!='P') {
			cin>>ml;
			int b=strlen(ml);
			if(b==7) {
				if(ml[0]=='E'&&ml[1]=='N'&&ml[2]=='Q'&&ml[3]=='U'&&ml[4]=='E'&&ml[5]=='U'&&ml[6]=='E') {
					cin>>mll;
					ENQUEUE();
				} else {
					DEQUEUE();
				}
			} else {
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
