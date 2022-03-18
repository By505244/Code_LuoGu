#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;
using namespace std;
bool flag[1005][1005];
bool st[1005][1005];
int a[1005],w[1005];
int n,m,aa,b;
bool find() {
	for(int i=1; i<=n; i++)
		for(int ii=1; ii<=m; ii++)
			if(flag[i][ii]==1)return true;
	return false;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		scanf("%d%d%d%d",&n,&m,&aa,&b);
		for(int i=1; i<=n; i++) {
			for(int i2=1; i2<=m; i2++) {
				char ch;
				cin>>ch;
				if(ch=='.')flag[i][i2]=0;
				else flag[i][i2]=1;
			}
		}
		for(int i=1; i<=aa; i++) {
			for(int i2=1; i2<=b; i2++) {
				char ch;
				cin>>ch;
				if(ch=='.')st[i][i2]=0;
				else st[i][i2]=1;
			}
		}
		bool flagg=0;
		int x,y;
		int sum=0;
		for(int i=1; i<=aa; i++) {
			for(int i2=1; i2<=b; i2++) {
				if(st[i][i2]==1&&flagg==0) {
					x=i,y=i2,flagg=1;
				} else if(st[i][i2]==1) {
					a[++sum]=i-x,w[sum]=i2-y;
					//cout<<a[sum]<<" "<<w[sum]<<endl;
				}
			}
		}
		bool can=true;
		for(int i=1; i<=n; i++) {
			if(can==false)break;
			for(int ii=1; ii<=m; ii++) {
				if(can==false)break;
				if(flag[i][ii]==true) {
					flag[i][ii]=false;
					for(int o=1; o<=sum; o++) {
						//cout<<a[o]+i<<" "<<w[o]+ii<<"\n";
						if(a[o]+i>n||w[o]+ii>m||a[o]+i<0||w[o]+ii<0) {
							can=false;
							break;
						}
						if(flag[a[o]+i][w[o]+ii]==false){
							can=false;
							break;
						}
						flag[a[o]+i][w[o]+ii]=false;
					}
				}
			}
		}
		if(can==true)printf("TAK\n");
		else printf("NIE\n");
	}
}
