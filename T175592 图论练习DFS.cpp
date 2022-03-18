#include<bits/stdc++.h>
using namespace std;
struct Node {
	bool a[1005];
} a[1005];
int n,m,q;
bool flag[1005];
int ans=0;
void dfs(int k) {
	for(int b=1; b<=n; b++) {
		if(a[k].a[b]==1&&flag[b]==0) {
			flag[b]=1;
			ans++;
			dfs(b);
		}
	}
}
int main() {
	cin>>n>>m;
	int h,h1;
	for(int b=1; b<=m; b++) {
		scanf("%d%d",&h,&h1);
		a[h].a[h1]=1;
	}
	int st;
	scanf("%d",&st);
	flag[st]=1;
	dfs(st);
	cout<<ans+1;
}
