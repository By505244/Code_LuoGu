#include<bits/stdc++.h>
using namespace std;
int a[100000],maxn,minn=10000;
double ave;
int main(){
	int n;
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
		ave+=a[b];
		maxn=max(maxn,a[b]);
		minn=min(minn,a[b]);
	}
	ave=ave-maxn-minn;
	ave=ave/(n-2);
	printf("%.2f",ave);
	return 0;
}
