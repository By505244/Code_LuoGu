#include<bits/stdc++.h>
using namespace std;
int n;
char a[150000],a1[150000];
void fz(int n1){
	for(int b=1;b<=n1;b++){
		a1[b]=a[b];
	}
	int b1=1;
	for(int b=n1;b>=1;b--){
		a[b1]=a1[b];
		b1++;
	}
}
int main(){
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
		if(n%b==0){
			fz(b);
		}
	}
	for(int b=1;b<=n;b++){
		cout<<a[b];
	}
}
