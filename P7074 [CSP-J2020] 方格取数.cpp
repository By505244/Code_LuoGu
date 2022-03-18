/*#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n,m,ans=-0x7fffffff;
bool flag[1005][1005];
int hh[1005][1005][3];
void dfs(int x,int y,int sum) {
	//cout<<x<<" "<<y<<endl;
	if(x==n&&y==m) {
		ans=max(ans,sum);
		return;
	}
	if(x+1<=n&&flag[x+1][y]==0&&sum+a[x+1][y]>hh[x+1][y][0]) {
		++x;
		hh[x][y][0]=sum+a[x][y];
		flag[x][y]=1;
		dfs(x,y,sum+a[x][y]);
		flag[x][y]=0;
		--x;
	}
	if(y+1<=m&&flag[x][y+1]==0&&sum+a[x][y+1]>hh[x][y+1][1]) {
		++y;
		hh[x][y][1]=sum+a[x][y];
		flag[x][y]=1;
		dfs(x,y,sum+a[x][y]);
		flag[x][y]=0;
		--y;
	}
	if(x-1>=1&&flag[x-1][y]==0&&sum+a[x-1][y]>hh[x-1][y][2]) {
		--x;
		hh[x][y][2]=sum+a[x][y];
		flag[x][y]=1;
		dfs(x,y,sum+a[x][y]);
		flag[x][y]=0;
		++x;
	}
	/*if(y-1>0&&!flag[x][y-1]==0&&sum+a[x][y-1]>=hh[x][y-1]){
		--y;
		hh[x][y]=sum+a[x][y];
		flag[x][y]=1;
		dfs(x,y,sum+a[x][y]);
		flag[x][y]=0;
		++y;
	}
}
int main() {
	for(int b=0; b<=1004; b++) {
		for(int i=0; i<=1004; i++) {
			hh[b][i][0]=-0x7fffffff,hh[b][i][1]=-0x7fffffff,hh[b][i][2]=-0x7fffffff;
		}
	}
	flag[1][1]=1;
	cin>>n>>m;
	for(int b=1; b<=n; b++) {
		for(int i=1; i<=m; i++) {
			cin>>a[b][i];
		}
	}
	dfs(1,1,0);
	cout<<ans+a[1][1];
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 0x7fffffff
int a[1005][1005];
ll dp[1005][1005][3];

int main(){
	for(int b=1;b<=1005;b++){
		for(int i=1;i<=1005;i++){
			dp[b][i][1]=-INF,dp[b][i][2]=-INF,dp[b][i][0]=-INF,
		} 
	}
	int n,m;
	cin>>n>>m;
	for(int b=1;b<=n;b++){
		for(int i=1;i<=m;i++){
			cin>>a[b][i];
		} 
	} 
	for(int b=1;b<=n;b++){
		dp[b][1]=a[b][1]; 
	}
	for(int b=1;b<=n;b++){
		for(int i=1;i<=m;i++){
			dp[b][i][0]
		}
	}
}
