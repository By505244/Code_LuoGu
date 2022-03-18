#include<bits/stdc++.h>
using namespace std;
int a[500000];
int main() {
	int b=1;
	while(cin>>a[b]&&a[b]!=0){
		b++;
	}
	for(int b1=b-1;b1>=1;--b1){
		cout<<a[b1]<<" ";
	}
}
