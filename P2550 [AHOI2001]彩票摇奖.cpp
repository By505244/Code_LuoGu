#include<bits/stdc++.h>
using namespace std;
int h[8];
int ans[8];
int main() {
	int n;
	cin>>n;
	for(int b=1; b<=7; b++) {
		cin>>h[b];
	}
	int a[8];
	int ab;
	for(int b=1; b<=n; b++) {
		ab=0;
		for(int i=1; i<=7; i++) {
			cin>>a[i];
			for(int g=1; g<=7; g++) {
				if(h[g]==a[i]) {
					ab++;
				}
			}
		}
		ans[7-ab]++;
	}
	for(int b=0;b<=6;b++){
		cout<<ans[b]<<" ";
	}
}
