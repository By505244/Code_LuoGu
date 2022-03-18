#include<bits/stdc++.h>
using namespace std;
bool a[2005][2005];
int main() {
	int n,q;
	cin>>n>>q;
	int h,h1;
	for(int b=1; b<=n; b++) {
		for(int c=1;c<=n;c++){
		scanf("%d",&a[b][c]);
		}
	}
	int q1,p;
	for(int b=1; b<=q; b++) {
		scanf("%d%d",&q1,&p);
		if(a[q1][p]==1) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
}
