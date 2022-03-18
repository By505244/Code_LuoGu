#include<bits/stdc++.h>
using namespace std;
inline int read() {
	int x=0,f=1;
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
int a[100005];
int f[100005];
bool flag[100005];
int dfs(int k) {
	if(flag[a[k]]==1) {
		return 1;
	}
	flag[a[k]]=1;
	if(f[k]!=0) {
		return f[k];
	}
	f[a[k]]=dfs(a[k])+1;
	return f[a[k]];
}
int main() {
	freopen("P2921.out","w",stdout);
	freopen("P2921_2.in","r",stdin);
	int n;
	n=read();
	for(int b=1; b<=n; b++) {
		a[b]=read();
	}
	for(int b=1; b<=n; b++) {
		for(int i=1; i<=n; i++) {
			flag[i]=0;
		}
		flag[b]=1;
		cout<<dfs(b)<<endl;
	}
}
