#include<bits/stdc++.h>
using namespace std;
int a[5000000];
int main(){
	int n,m;
	cin>>m>>n;
	for(int b=1;b<=n;b++){
		scanf("%d",&a[b]);
	}
	sort(a+1,a+n+1);
	for(int b=1;b<=n;b++){
		cout<<a[b]<<" ";
	}
}
