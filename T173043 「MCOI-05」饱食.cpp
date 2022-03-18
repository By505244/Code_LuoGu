#include<bits/stdc++.h>
using namespace std;
char a[500000][1000];
int main() {
	int n;
	cin>>n;
	int ans=0;
	for(int b=1; b<=n; b++) {
		cin>>a[b];
	}
	if(a[1][0]=='M'&&a[2][0]=='M'){
		cout<<0;
	}
	for(int b=1; b<=n; b++) {
		if(a[b][0]!='M'&&a[b][0]!='C'&&a[b][0]!='O'&&a[b][0]!='I') {
			continue;
		}
		for(int c=b+1; c<=n; c++) {
			if(a[b][0]==a[c][0]) {
				continue;
			}
			if(a[c][0]!='M'&&a[c][0]!='C'&&a[c][0]!='O'&&a[c][0]!='I') {
				continue;
			}
			for(int i=c+1; i<=n; i++) {
				if(a[i][0]!='M'&&a[i][0]!='C'&&a[i][0]!='O'&&a[i][0]!='I') {
					continue;
				}
				if(a[b][0]!=a[c][0]&&a[c][0]!=a[i][0]) { //M£¬C£¬O »ò I
				    ans++;
				}
			}
		}
	}
	cout<<ans;
}

