#include<bits/stdc++.h>
using namespace std;
int dp[5000000];
struct rec {
	int t,f,h;
} l[101];
bool cmp(const rec a,const rec b) {
	return a.t<b.t;
}
int main() {
	int d,n;
	cin>>d>>n;
	int sum=0,maxn=0;
	for(int b=1; b<=n; b++) {
		scanf("%d%d%d",&l[b].t,&l[b].f,&l[b].h);
		maxn=max(maxn,l[b].t);
	}
	bool flag;
	int h=1;
	sort(l+1,l+1+n,cmp);
	dp[1]=11;
	for(int b=1; b<=maxn; b++) {
		flag=0;
		for(int i=1000000; i>=1 ;i--) {
			if(l[h].t==b&&dp[i]>0) {
				cout<<b<<endl;
				dp[i+l[h].h]=max(dp[i+l[h].h]-1,dp[i]-1);
				dp[i]+=l[h].f-1;
				flag=1;
			}
			if(dp[1]==0) {
				cout<<b;
				return 0;
			}
			if(i>=d&&dp[i]>=1) {
				cout<<1;
				cout<<b+1;
				return 0;
			}
		}
		if(flag) {
			h++;
		}
	}
}
