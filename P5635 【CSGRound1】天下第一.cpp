#include<bits/stdc++.h>
using namespace std;
int n,x,y,mod;
int dfs(int xx,int yy,int k){
	if(xx==x&&yy==y&&k!=1){
		return 0;
	}
	if(xx==0){
		return 1;
	}
	if(yy==0){
		return 2;
	}
	if(k%2==1){
		xx=(xx+yy)%mod;
		return dfs(xx,yy,k+1);
	}
	if(k%2==0){
		yy=(xx+yy)%mod;
		return dfs(xx,yy,k+1);
	}
}
int main(){
	cin>>n>>mod;
	for(int b=1;b<=n;b++){
		cin>>x>>y;
		int h=dfs(x,y,1);
		if(h!=0){
			cout<<h<<endl;
		}else{
			cout<<"error"<<endl;
		}
	}
}
