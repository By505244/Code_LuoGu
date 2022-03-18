#include<bits/stdc++.h>
//#define int long long
//#define int short
using namespace std;
int a[5005];
int n,c;
int ans=0;
void dfs(int k,int sum) {
	if(sum==c) {
		cout<<c;
		exit(0);
	}
	if(k>n){
		return;
	}
	dfs(k+1,sum);
	if(a[k]+sum<=c){
		ans=max(ans,a[k]+sum);
		dfs(k+1,sum+a[k]);
	}
}
int main() {
	scanf("%d%d",&n,&c);
	int k=1;
	for(int b=1; b<=n; b++) {
		int h;
		scanf("%d",&h);
		if(h<c) {
			a[k]=h;
			k++;
		} else if(h==c) {
			cout<<c;
			return 0;
		}
	}
	k--;
	n=k;
	dfs(1,0);
	cout<<ans;
}

