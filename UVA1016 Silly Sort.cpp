#include<bits/stdc++.h>
#define INF 0x7fffffff

using namespace std;
int a[5000],ans;
int main() {
	int n;
	while(cin>>n&&n!=0) {
		for(int b=1; b<=n; b++) {
			cin>>a[b];
		}
		for(int b=1;b<=n;b++){
			int ans1=INF;
			for(int c=1;c<=n;c++){
				if(a[b]<a[c]){
					ans1=min(ans1,a[b]);
					int z=a[b];
					a[b]=a[c];
					a[c]=z;
				}
			}
		}
		cout<<ans;
	}
}

