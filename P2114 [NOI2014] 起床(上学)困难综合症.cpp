#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
struct Node {
	int a;
	string str;
} a[10005];
int n,m;
int main() {
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) {
		char str[15];
		scanf("%s%d",&str,&a[i].a);
		a[i].str=str;
	}
	int ans=0,sum=0;
	for(int i=30;i>=0;i--){
		int now=1,nows=0;
		for(int j=1;j<=n;j++){
			int aa=a[j].a>>i&1;
			if(a[j].str=="OR")now|=aa;
			else if(a[j].str=="XOR")now^=aa;
			else if(a[j].str=="AND")now&=aa;
		}
		for(int j=1;j<=n;j++){
			int aa=(a[j].a>>i)&1;
			if(a[j].str=="OR")nows|=aa;
			else if(a[j].str=="XOR")nows^=aa;
			else if(a[j].str=="AND")nows&=aa;
			cout<<aa<<endl;
		}
		if(now>nows&&sum+(1<<i)<=m){
			cout<<i<<" "<<now<<endl;
			sum+=(1<<i);
			ans+=now<<i;
		}else{
			cout<<i<<" 1 "<<nows<<endl;
			ans+=nows<<i;
		}
	}
	cout<<ans;
}

