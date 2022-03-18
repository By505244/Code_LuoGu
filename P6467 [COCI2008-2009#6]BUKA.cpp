#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
char a[105];
char b[105];
int main() {
	char x;
	cin>>a>>x>>b;
	int a_l=strlen(a);
	int b_l=strlen(b);
	if(x=='+') {
		if(a_l!=b_l) {
			cout<<1;
			for(int i=max(a_l,b_l)-1; i>=1; --i) {
				if(i==min(a_l,b_l))cout<<1;
				else cout<<0;
			}
		} else {
			cout<<2;
			for(int i=max(a_l,b_l)-1; i>=1; --i) {
				cout<<0;
			}
		}
	}
	if(x=='*') {
		cout<<1;
		for(int i=2; i<=a_l+b_l-1; i++) {
			cout<<0;
		}
	}
}

