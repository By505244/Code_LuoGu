#include<bits/stdc++.h>
//#define int long long
//#define int short
#define ll long long
inline ll read() {
	ll x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9') {
		if(ch=='-')
			f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x*f;
}
using namespace std;
int n,k,s;
bool flag;
void dfs(int k1,int sum,int sum1) {	
	if(k1-1>n||sum1>k) {
		return;
	}
	if(sum==s&&flag==0&&sum1==k) {
		cout<<"Yes\n";
		flag=1;
		return;
	}
	dfs(k1+1,sum+k1,sum1+1);
	dfs(k1+1,sum,sum1);
}
int main() {
	int t=read();
	for(int b=1; b<=t; b++) {
		flag=0;
		n=read(),k=read(),s=read();
		dfs(1,0,0);
		if(flag==0) {
			cout<<"No\n";
		}
	}
}

