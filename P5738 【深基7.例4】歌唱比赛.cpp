#include<bits/stdc++.h>
using namespace std;
int a,maxn,minn=10000;
double ave,ans;
int main() {
	int n,m;
	cin>>m>>n;
	for(int b1=1; b1<=m; b1++) {
		ave=0,maxn=0,minn=100;
		for(int b=1; b<=n; b++) {
			cin>>a;
			ave+=a;
			maxn=max(maxn,a);
			minn=min(minn,a);
		}
		ave=ave-maxn-minn;
		ave=ave/(n-2);
		ans=max(ans,ave);
	}
	printf("%.2f",ans);
	return 0;
}
