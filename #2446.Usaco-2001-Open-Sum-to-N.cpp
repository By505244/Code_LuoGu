#include<bits/stdc++.h>
int n,sum,ans,ans1;
bool a[30];
using namespace std;
void dfs(int k){
	if(k==n){
		sum=0;
		for(int b=1;b<n;b++){
			if(a[b]==1){
				sum=sum+b;
			}else {
				sum=sum-b;
			}
		}
		if(sum==n){
			ans++;
	    }
		return ;
	}else{
	a[k]=1;
	dfs(k+1);
	a[k]=0;
	dfs(k+1);
	}
}
int main(){
	a[1]=0;
	cin>>n;
	dfs(2);
	cout<<ans;
}
