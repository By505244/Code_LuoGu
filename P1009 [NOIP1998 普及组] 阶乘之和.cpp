#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
short ch[50000];
int l=0;
char in[50000];
void gj_j(int l_l){
	int j=0;
	int i;
	for(i=0;i<max(l,l_l)||j==1;++i){
		if(ch[i]+in[l_l-i-1]-48+j<10)ch[i]+=in[l_l-i-1]-48+j,j=0;
		else ch[i]+=in[l_l-i-1]-58+j,j=1;
	}
	l=i;
}
void gj_x(int l_l){
	int j=0;
	int i;
	for(i=0;i<max(l,l_l)||j==1;++i){
		if(ch[i]+in[l_l-i-1]-48+j<10)ch[i]+=in[l_l-i-1]-48+j,j=0;
		else ch[i]+=in[l_l-i-1]-58+j,j=1;
	}
}
int main() {
	int n;
	cin>>n;
	for(int b=1; b<=n; b++) {
		unsigned long long int a=1;
		for(int i=1; i<=b; i++) {
			a*=i;
		}
		for(int i=0;i<50000;i++)in[i]=0;
		sprintf(in,"%llu",a);
		cout<<a<<endl;
		int lll=strlen(in);
		cout<<lll<<endl;
		gj_j(lll);
	}
	for(int i=l-1;i>=0;--i)cout<<ch[i]<<" ";
}

