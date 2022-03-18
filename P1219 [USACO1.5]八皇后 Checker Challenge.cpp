#include<bits/stdc++.h>
using namespace std;
int a[15],n;
bool flag[15][15];
int ans;
bool te(int x,int y){
	for(register int b=1;b<=n;b++){
		if(a[b]==x&&b!=y){
			return false;
		}
	}
	int b1=x+1;
	for(register int b=y+1;b<=n;b++){
		if(b1<=n&&a[b]==b1){
			return false;
		}
		b1++;
	}
	b1=x-1;
	for(register int b=y+1;b<=n;b++){
		if(b1>=1&&a[b]==b1){
			return false;
		}
		b1--;
	}
	b1=x+1;
	for(register int b=y-1;b>=1;b--){
		if(b1<=n&&a[b]==b1){
			return false;
		}
		b1++;
	}
	b1=x-1;
	for(register int b=y-1;b>=1;b--){
		if(b1>=1&&a[b]==b1){
			return false;
		}
		b1--;
	}
	return true;
}
void dfs(int k) {
	//cout<<n<<endl;
	if(k==n) {
		if(ans<3) {
			for(int b=1; b<=n; b++) {
				cout<<a[b]<<" ";
			}
			cout<<endl;
		}
		ans++;
		return ;
	}
	for(register int b=1;b<=n;b++){
		if(te(b,k+1)){
			a[k+1]=b;
			dfs(k+1);
			a[k+1]=0;
		}
	}
}
int main() {
	cin>>n;
	dfs(0);
	cout<<ans;
	return 0;
}
