#include<bits/stdc++.h>
#define ll long long int
const int INF = 0x7fffffff;

using namespace std;
ll a[1000005];
int main() {
	ll n,m;
	scanf("%lld%lld",&n,&m);
	ll sum=0;
	for(int i=1; i<=n; i++) {
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	sort(a+1,a+n+1);
	ll summ=0;
	for(int i=2;i<n;i++){
		summ+=a[n]-a[i];
	}
	if(summ>=m){
		cout<<sum-a[1]-a[n]+m;
	}else{
		int mm=m-summ;
		ll aa=mm/(n-1);
		ll a1=aa*(n-1);
		if(mm==a1){
			cout<<sum-a[1]-a[n]+m-aa;
		}else{
			//aa>a1
			cout<<sum-a[1]-a[n]+m-aa-1;
		}
	}
	
}

