#include<bits/stdc++.h>
using namespace std;
int dp[90000000];
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
		sum+=l[b].h;
	}
	bool flag,flag1=0;
	int h=1;
	sort(l+1,l+1+n,cmp);
	dp[1]=11;
	int ans=0;
	for(int b=1; b<=maxn; b++) {
		flag=0;
		ans++;
		for(int i=sum; i>=1 ; i--) {
			if(l[h].t==b&&dp[i]>=b) {
				dp[i+l[h].h]=max(dp[i+l[h].h],dp[i]);
				dp[i]+=l[h].f;
				flag=1;
			}
			if(i==d&&dp[i]>=1) {
				if(l[h].t==b) {
					cout<<b;
				} else {
					cout<<l[h-1].t;
				}
				return 0;
			}
			if(dp[1]==0) {
				cout<<b;
				return 0;
			}
		}
		if(flag) {
			if(l[h+1].t==l[h].t) {
				--b;
			}
			h++;
		}
	}

}
