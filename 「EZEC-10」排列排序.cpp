#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
struct Node {
	int s,f;
	bool operator <(const Node b)const {
		return f<b.f;
	}
} a[1000005];
bitset<1000005>flag;
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int side=1;
		int ans=0;
		for(int i=1;i<=n;i++)flag[i]=0;
		for(int i=1; i<=n; i++) {
			int bb;
			scanf("%d",&bb);
			if(bb!=i) {
				for(int b=i; b<=bb; b++) {
					if(flag[b]==0) {
						flag[b]=1;
						ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}

