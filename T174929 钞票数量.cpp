#include<bits/stdc++.h>
using namespace std;
int q[10]={0,1,5,10,20,100};
int main(){
	int n,ans=0,a=0;
	cin>>n;
	while(n>a){
		for(int b=5;b>=1;b--){
			if(a+q[b]<=n){
				a+=q[b];
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
