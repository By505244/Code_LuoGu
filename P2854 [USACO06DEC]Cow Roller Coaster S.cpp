#include<bits/stdc++.h>
using namespace std;
struct Node {
	int x,w,f,c;
} a[10005];
bool cmp(const Node a,const Node b) {
	return a.x<b.x;
}
struct rec {
	bool flag;
	int interesting[10005];
};
int l,n,ben;
rec dp[10005];
int main() {
	cin>>l>>n>>ben;
	for(int b=1; b<=n; b++) {
		scanf("%d%d%d%d",&a[b].x,&a[b].w,&a[b].f,&a[b].c);
	}
	sort(a+1,a+n+1,cmp);
	dp[0].flag=1;
	for(int b=1; b<=n; b++) {
		for(int i=a[b].x+a[b].w; i>=a[b].x; i--) {
			if(dp[i].flag) {
				dp[i+a[b].x].flag=1;
				if(dp[dp[i].interesting[i]]>=1){
					dp[i].interesting[i]=max(dp[i].interesting[i],dp)
				}
				if(dp[i+a[b].x].interesting[i+a[b].c]<dp[i].interesting[i]+a[b].c) {
					dp[i+a[b].x].interesting[i+a[b].c]=dp[i].interesting[i]+a[b].c;
					cout<<b<<endl;
				}
			}
		}
	}
	int maxn=-1;
	for(int b=1; b<=n; b++) {
		for(int i=1; i<=10005; i++) {
			if(dp[b].interesting[i]<=b&&dp[b].interesting[i]>0) {
				maxn=max(maxn,i);
			}
		}
	}
	if(maxn>0) {
		cout<<maxn;
	} else {
		cout<<-1;
	}
}