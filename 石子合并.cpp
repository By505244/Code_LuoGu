#include<bits/stdc++.h>
#define ll long long
#define debug puts("I AK IOI");
const int INF = 0x7fffffff;

using namespace std;
int f[305][305],sum[305];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n*2; i++) {
		for(int k=1; k<=n*2; k++) {
			f[i][k]=0x3f3f3f3f;
		}
	}
	for(int i=1; i<=n; i++) {
		scanf("%d",&f[i][i]);
		sum[i]=sum[i-1]+f[i][i];
	//	f[i][i]=0;
	}
	for(int i=n+1; i<=2*n; i++) {
		f[i][i]=f[i-n][i-n];
		sum[i]=sum[n]+sum[i-n];
	//	printf("%d\n",sum[i]);
	}
	for(int len=2; len<=n; len++) {
		for(int l=1; l<=n*2-len+1; l++) {
			int r=len+l-1;
			for(int k=l; k<r; k++) {
				if(f[l][r]>f[l][k]+f[k+1][r]) {
					f[l][r]=f[l][k]+f[k+1][r];
					//f[l][r]+=sum[r]-sum[l-1];
				}
			}
		}
	}
	int minn=0x7fffffff;
	for(int i=1; i<=n; i++) {
		minn=min(minn,f[i][i+n-1]);
		printf("%d %d %d\n",f[i][i+n-1],i,i+n-1);
	}
	printf("%d\n",minn);
	for(int i=1; i<=n; i++) {
		for(int k=1; k<=n; k++) {
			f[i][k]=0;
		}
	}
	for(int len=2; len<=n; len++) {
		for(int l=1; l<=n*2-len+1; l++) {
			int r=len+l-1;
			for(int k=l; k<r; k++) {
				if(f[l][r]<f[l][k]+f[k+1][r]) {
					f[l][r]=f[l][k]+f[k+1][r];
				}
				//f[l][r]+=sum[r]-sum[l-1];
			}
		}
	}
	minn=0;
	for(int i=1; i<=n; i++) {
		minn=max(minn,f[i][i+n-1]);
		//printf("%d %d %d\n",f[i][i+n-1],i,i+n-1);
	}
	printf("%d",minn);
}

