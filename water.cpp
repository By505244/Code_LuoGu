#include<bits/stdc++.h>
using namespace std;
int ans;
int main(){
	int n,x,c;
	cin>>n>>x;
	for(int b=1;b<=n;b++){
		for(c=b;c>0;c=c/10){
			if(c%10==x){
				ans++;
			}
		}
	}
	cout<<ans;
}
