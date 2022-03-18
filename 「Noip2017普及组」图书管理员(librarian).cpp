#include<bits/stdc++.h>
using namespace std;
int bm[1000005],wa[100005],s[100005];
int b1,a;
bool flag=1;
bool cmp(const int a,const int b) {
	return a<b;
}
int main() {
	int n,q;
	cin>>n>>q;
	for(int b=1; b<=n; b++) {
		cin>>bm[b];
	}
	for(int b=1; b<=q; b++) {
		cin>>s[b]>>wa[b];
	}
	sort(bm+1,bm+n+1,cmp);
	for(int b=1; b<=q; b++) {
		for(int b1=1; b1<=n; b1++) {
			a=pow(10,s[b]);
			a=bm[b1]%a;
			//cout<<a<<" ";
			if(a==wa[b]) {
				cout<<bm[b1]<<endl;
				flag=0;
				break;
			}
		}
		if(flag) {
			cout<<"-1"<<endl;
		} else {
			flag=1;
		}
	}
}
