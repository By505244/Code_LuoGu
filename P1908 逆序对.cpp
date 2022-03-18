#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
ll a[10000001];
ll b[10000001];
ll ans=0;
void gui(ll l,ll r) {
	if(l==r)return;
	ll mid=(l+r)/2;
	ll i=l,j=mid+1;
	gui(l,mid),gui(mid+1,r);
	for(int k=l; k<=r; k++) {
		if(j>r||i<=mid&&a[i]<=a[j])b[k]=a[i],i++;
		else b[k]=a[j],j++,ans+=mid-i+1;
	}
	for(int k=l; k<=r; k++)a[k]=b[k];
}
ll kk,n;
int main() {
	cin>>kk;
	while(kk--) {
		cin>>n;
		for(int i=0;i<1000000;i++)a[i]=0,b[i]=0;
		for(ll i=1; i<=n; i++) {
			cin>>a[i];
		}
		ans=0;
		gui(1,n);
		cout<<ans<<"\n";
	}
}
