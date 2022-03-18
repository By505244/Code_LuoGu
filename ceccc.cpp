#include<bits/stdc++.h>
using namespace std;
int ans,n,a[55];
int main() {
	int k;
	cin>>k;
	while(k--) {
		cin>>n;
		ans=0;
		for(int b=1; b<=n; b++) {
			cin>>a[b];
		}
		for(int b=1; b<=n-1; b++) {
			for(int c=1; c<=n-b; c++) {
				if(a[c]>a[c+1]) {
					ans++;
					int z=a[c];
					a[c]=a[c+1],a[c+1]=z;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.",ans);
	}
}
