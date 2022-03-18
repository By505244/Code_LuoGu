#include<bits/stdc++.h>
using namespace std;
int l[105],r[105];
bool pr1[100000005]={}; 
int n;
inline bool pri(int k) {
	if(pr1[k]) {
		long long sum=0,a;
		while(k!=0) {
			a=k/10*10;
			sum+=k-a;
			k/=10;
		}
		if(pr1[sum]) {
			return true;
		}
	}
	return false;
}
int main() {
	cin>>n;
	int maxn=0;
	//freopen("100000000以内的质数.txt","w",stdout);
	for(int b=1; b<=n; b++) {
		scanf("%d%d",&l[b],&r[b]);
		maxn=max(maxn,r[b]);
	}
	int m=0;
	long long ans;
	for(int b=1; b<=n; b++) {
		ans=0;
		for(int c=l[b]; c<=r[b]; c++) {
			if(pri(c)) {
				ans++;
			}
		}
		cout<<ans;
		if(b!=n) {
			cout<<endl;
		}
	}
}
