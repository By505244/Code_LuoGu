
#include<bits/stdc++.h>
using namespace std;
int a[505][505];
int f[105][105];
int fx[5]= {0,0,0,1,-1};
int fy[5]= {0,1,-1,0,0};
int n,m;
int dfs(int x,int y) {
	if(f[x][y]!=0) {
		return f[x][y];
	}
	f[x][y]=1;
	for(int b=1; b<=4; b++) {
		int xx=fx[b]+x;
        int yy=fy[b]+y;
		if(a[xx][yy]<a[x][y]&&xx>0&&xx<=n&&yy>0&&yy<=m) {
			dfs(xx,yy);
			f[x][y]=max(f[x][y],f[xx][yy]+1);
		}
	}
	return f[x][y];
}
int main() {
	cin>>n>>m;
	for(int b=1; b<=n; b++) {
		for(int i=1; i<=m; i++) {
			scanf("%d",&a[b][i]);
		}
	}
	int ans=0;
	for(int b=1; b<=n; b++) {
		for(int i=1; i<=m; i++) {
			ans=max(ans,dfs(b,i));
		}
	}
	cout<<ans;
}
