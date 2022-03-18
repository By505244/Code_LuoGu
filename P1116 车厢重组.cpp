#include<bits/stdc++.h>
using namespace std;
int ans,n,a[1000000];
int main(){
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
	}
	for(int b=1;b<=n-1;b++){
		for(int c=1;c<=n-b;c++){
			if(a[c]>a[c+1]){
				ans++;
				int z=a[c];a[c]=a[c+1],a[c+1]=z; 
			}
		}
	}
	cout<<ans;
}
