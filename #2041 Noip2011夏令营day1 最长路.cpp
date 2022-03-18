
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 0x7fffffff;
int tot,head[1000005],next[1000005],fin[1000005],longs[1000005];
bool flag[1000005];
void add(int x,int y,int z) {
	tot++,fin[tot]=y,longs[tot]=z,next[tot]=head[x],head[x]=tot;
}
int ans=-1;
void dfs(int k,int sum) {
	if(k==0||flag[k]==1) {
		ans=max(ans,sum);
		return;
	}
	flag[k]=1;
	dfs(next[k],sum);
	dfs(fin[k],sum+longs[k]);
}
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=m; i++) {
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(x,y,z);
	}
	dfs(head[1],0);
	if(ans!=0)cout<<ans;
	else cout<<-1;
}

