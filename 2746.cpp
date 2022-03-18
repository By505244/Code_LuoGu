#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,c;
	cin>>n;
	char a[n];
	int b1[n];
	for(int h=0;h<n;h++){
		a[h]='a'+h;
		b1[h]=0;
	}
	char b[100];
	cin>>b;
	c=strlen(b);
	for(int h=0;h<c;h++){
		for(int d=0;d<n;d++){
			if(b[h]==a[d]){
				b1[d]=b1[d]+1;
			}
			if(b[h]==a[d]-32){
				b1[d]=b1[d]+1;
			}
		}
	}
	for(int h=0;h<n;h++){
		cout<<a[h]<<":"<<b1[h]<<endl;
	}
	return 0;
}
