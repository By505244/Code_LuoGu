#include<bits/stdc++.h>
using namespace std;
int a[25],h[25],ans=20000,g;
bool te() {
	for(int b=1; b<21; b++) {
		if(h[b]==1) {
			return false;
		}
	}
	return true;
}
void dfs(int k,int cnt) {
	if(k==21) {
		if(te()) {
			//cout<<cnt<<endl;
			ans=min(ans,cnt);
		}
		return;
	} else {
	    h[k]=1-h[k];
		h[k-1]=1-h[k-1];
		h[k+1]=1-h[k+1];
		dfs(k+1,cnt+1);
		h[k]=1-h[k];
		h[k-1]=1-h[k-1];
		h[k+1]=1-h[k+1];
		dfs(k+1,cnt);
		/**************************/
		
	}
}
int main() {
	for(int b=1; b<21; b++) {
		cin>>a[b];
		h[b]=a[b];
	}
	dfs(1,0);
	cout<<ans;
	return 0;
}
