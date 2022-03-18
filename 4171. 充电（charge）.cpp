#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;
int n,m,x[505] ;
using namespace std;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	int ans=0;
	for(int i=1;i<=m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		ans+=x[a]*b;
	}
	printf("%d",ans);
}

