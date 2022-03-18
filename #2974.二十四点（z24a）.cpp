#include<bits/stdc++.h>
using namespace std;
int n,a[15],h[15],ans;
bool te(){
	int sum=0; 
	for(int b=1;b<=n;b++){
		int z=a[b];
		if(h[b]==3){
			continue;
		}
		if(h[b+1]==3){
			for(int c=b+1;h[c]==3;c++){
				z=z*a[c];
			}
		}
		if(h[b]==1){
			sum=sum+z;
		}else if(h[b]==2){
			sum=sum-z;
		}
	}
//	cout<<sum<<h[1]<<h[2]<<h[3]<<endl;
	if(sum==24){
		return true;
	}else {
		return false;
	}
}
void dfs(int k){
	if(k==n+1){
		if(te()){
			ans++;
		}
		return;
	}
	h[k]=1;
	dfs(k+1);
	h[k]=2;
	dfs(k+1);
	h[k]=3;
	dfs(k+1);
}
int main(){
	cin>>n;
	h[1]=1;
	for(int b=1;b<=n;b++){
		cin>>a[b];
	}
	dfs(2);
	cout<<ans;
} 
