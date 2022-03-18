#include<bits/stdc++.h>
#define ll unsigned long long

using namespace std;
int main() {
	ll t;
	cin>>t;
	for(int i=1; i<=t; i++) {
		ll l=1,r=18446744073709551615,mid;
		while(true) {
			mid=(l+r)>>1;
			cout<<mid<<endl;
			int ans;
			cin>>ans;
			if(ans==0) {
				return 0;
			} else if(ans==1) {
				r=mid;
			} else if(ans==-1) {
				l=mid+1;
			}
		}
	}
}
