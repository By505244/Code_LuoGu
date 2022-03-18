#include<bits/stdc++.h>
//#define k kkksc03_take_the_lift
#define INF 0x7fffffff
using namespace std;
int n,a,b;
int l[205];
bool flag[205];
int ans=INF;
void dfs(int k,int sum) {
	if(k==b) {
		ans=min(ans,sum);
	}
	if(sum>ans){
		return;
	}
	if(k+l[k]<=n+1&&!flag[k+l[k]]) {
		flag[k+l[k]]=1;
		dfs(k+l[k],sum+1);
		flag[k+l[k]]=0;
	}
	if(k-l[k]>=1&&!flag[k-l[k]]) {
		flag[k-l[k]]=1;
		dfs(k-l[k],sum+1);
		flag[k-l[k]]=0;
	}
}
int main() {
	cin>>n>>a>>b;
	for(int i=1; i<=n; i++) {
		cin>>l[i];
	}
	flag[a]=1;
	dfs(a,0);
	if(ans!=INF) {
		cout<<ans;
	} else {
		cout<<-1;
	}
}

