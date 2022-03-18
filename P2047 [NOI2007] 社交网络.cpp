#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int sum[105][105],d[105][105];
double ans;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	   for(int k=1;k<=n;k++)
	       d[i][k]=0x3f3f3f3f;
	for(int i=1;i<=n;i++)
	    d[i][i]=0;
	for(int i=1;i<=n;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		d[x][y]=z,d[y][x]=z;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(d[j][k]>d[j][i]+d[i][k]){
					sum[j][k]=1;
					d[j][k]=d[j][i]+d[i][k];
				}else if(d[j][k]==d[j][i]+d[i][k]&&d[j][k]!=0x3f3f3f3f){
					sum[j][k]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans=0;
		for(int s=1;s<=n;s++){
			for(int t=1;t<=n;t++){
				if(s==i||t==i||s==t)continue;
				int c=min(sum[s][i],sum[i][t]);
				c/=2;
				int c1=sum[s][t];
				printf("%d %d\n",s,t);
				if(c1!=0)ans+=c*1.000/c1;
			}
		}
		ans/=2;
		printf("%.3lf\n",ans);
	}
}

