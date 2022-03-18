#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
bool flag[55][55];
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) {
		for(int ii=1; ii<=m; ii++) {
			scanf("%d",&flag[i][ii]);
		}
	}
	int ans=0;
	for(int x=1; x<n; x++) {
		for(int y=1; y<=m; y++) {
			for(int x2=(x+1+x)%2==1?x+2:x+1; x2<=n; x2+=2) {
				for(int y2=y+1; y2<=m; y2++) {
					bool flagg=1;
					for(int i=x; i<=x2; i++) {
						if(flag[i][y]==1||flag[i][y2]==1) {
							flagg=0;
							break;
						}
					}
					if(flagg==0)continue;
					int hh=(x+x2)/2;
					for(int i=y; i<=y2; i++) {
						if(flag[hh][i]==1) {
							flagg=0;
							break;
						}
					}
					if(flagg==1)ans++;
				}
			}
		}
	}
	cout<<ans;
}

