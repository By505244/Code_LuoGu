#include<bits/stdc++.h>
using namespace std;
int maxn[100005][2],n,h[100005],rt=0,rti;
int main() {
	cin>>n;
	for(int b=0; b<n; b++) {
		cin>>h[b];
	}
	for(int b=n-1; b>=0; b--) {
		if(maxn[rt][0]<=h[b]&&b!=n-1) {
			rt++;
			maxn[rt][0]=h[b];
			maxn[rt][1]=b;
		} else if(b==n-1) {
			maxn[rt][0]=h[b];
			maxn[rt][1]=b;
		}
	rti=rt;
	for(int b=0; b<n; b++) {
		if(b<maxn[rti][1]) {
            cout<<maxn[rti][1]+1<<endl;
		}else if(b==maxn[rti][1]){
			rti--;
			cout<<0<<endl;
		}
	}
}
