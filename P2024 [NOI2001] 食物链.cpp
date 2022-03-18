#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int f[150005];

int find(int x) {
	if(f[x]==x)return x;
	f[x]=find(f[x]);
	return f[x];
}

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1; i<=3*n; i++)f[i]=i;
	int ans=0;
	for(int i=1; i<=k; i++) {
		int hzy,a,b;
		scanf("%d%d%d",&hzy,&a,&b);
		if(a>n||b>n) {
			ans++;
			continue;
		}
		if(hzy==1) {
			if(find(a)==find(b+n)||find(a+n)==find(b)) {
				ans++;
			} else {
				f[find(a)]=find(b),f[find(a+n)]=find(b+n),f[find(a+n+n)]=find(b+n+n);
			}
		} else if(hzy==2) {
			if(find(a)==find(b)||find(a)==find(b+n+n)) {
				ans++;
				continue;
			} else {
				f[find(a)]=find(b+n),f[find(a+n+n)]=find(b),f[find(a+n)]=find(b+n+n);
			}
		}
	}
	cout<<ans;
}

