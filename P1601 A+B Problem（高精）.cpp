#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
char ch[50000];
int l=0;
char in[50000];
int by;
short ans[1005];
void gj_j(int l_l){
	int j=0;
	int i;
	for(i=500;i>=0;--i){
		//if(ch[i-1]-48+in[i-1]-48+j>=10)j=1;
		if(i==0&&ch[0]-48+in[0]-48+j>=10)by=1;
		if(ch[i]-48+in[i]-48+j<10)ans[i]=ch[i]-48+in[i]-48+j,j=0;
		else ans[i]=ch[i]-48+in[i]-58+j,j=1;
	}
	l=max(l,l_l);
}
int main(){
	for(int i=0;i<=500;i++)ch[i]=48,in[i]=48;
	cin>>ch>>in;
	l=strlen(ch);
	gj_j(strlen(in));
	if(by!=0)cout<<by;
	for(int i=l-1;i>=0;--i)cout<<ans[i];
}


