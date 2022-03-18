#include<bits/stdc++.h>
#define ll long long
#define debug puts("I AK IOI");
#define MAX_L 201
#define MAX_N 1001
const int INF = 0x7fffffff;

using namespace std;
int f[2][MAX_L][MAX_L];
int a[MAX_N],c[MAX_L][MAX_L],l,n,ans,X[MAX_N],Y[MAX_N];
unsigned char path[MAX_N][MAX_L][MAX_L];

int C(int x,int y);
void clean(int i);

int main() {
	scanf("%d%d",&l,&n);
	for(int i=1; i<=l; i++) {
		for(int k=1; k<=l; k++) {
			scanf("%d",&c[i][k]);
		}
	}

	for(int x=0; x<=l; x++)
		for(int y=0; y<=l; y++)
			f[0][x][y]=0x3f3f3f3f;

	a[0]=3,f[0][1][2]=0,X[0]=1,Y[0]=2;

	for(int i=1; i<=n; i++)scanf("%d",&a[i]);

	for(int i=1; i<=n; i++) {
		clean(i);
		for(int x=1; x<=l; x++) {
			for(int y=1; y<=l; y++) {
				if(f[i&1^1][x][y]!=0x3f3f3f3f&&x!=y) {
					int z=a[i-1];
					if(x!=a[i]&&y!=a[i]) {
						if(f[i&1][x][y]>f[i&1^1][x][y]+C(z,a[i])) {
							f[i&1][x][y]=f[i&1^1][x][y]+C(z,a[i]),path[i][x][y]=0;
						}
					}
					if(x!=a[i]&&z!=a[i]) {
						if(f[i&1][x][z]>f[i&1^1][x][y]+C(y,a[i])) {
							f[i&1][x][z]=f[i&1^1][x][y]+C(y,a[i]),path[i][x][z]=y;
						}
					}
					if(y!=a[i]&&z!=a[i]) {
						if(f[i&1][z][y]>f[i&1^1][x][y]+C(x,a[i])) {
							f[i&1][z][y]=f[i&1^1][x][y]+C(x,a[i]),path[i][z][y]=x;//z要放在第一个，不能放在第二个，因为z是代替x的。 
						}
					}
				}
			}
		}
	}
	ans=0x7fffffff;
	int mx,my;
	for(int x=1; x<=l; x++) {
		for(int y=1; y<=l; y++) {
			if(f[n&1][x][y]<ans)mx=x,my=y,ans=f[n&1][x][y];
		}
	}
	a[0]=3;
	printf("%d\n",ans);
	for(int i=n; i>=1; i--) {
		X[i]=mx,Y[i]=my;//一定有一个等于a_{i-1}的
		printf("%d %d\n",mx,my);
		if(path[i][mx][my])(a[i-1]==mx)?(mx=path[i][mx][my]):(my=path[i][mx][my]);
	}
	int num_x=1,num_y=2;
	for(int i=1;i<=n;i++){
		if(X[i]==a[i-1])num_x=6-num_x-num_y;//因为x[i]==a[i-1]所以X[i]会被转移到f数组隐藏的那个纬度。 
		else if(Y[i]==a[i-1])num_y=6-num_x-num_y;//赋值结果在1-3之间。 
		printf("%d ",6-num_x-num_y);
	} 
}
int C(int x,int y) {
	return c[x][y];
}
void clean(int i) {
	for(int k=0; k<=l; k++) {
		for(int j=0; j<=l; j++) {
			f[i&1][k][j]=0x3f3f3f3f;
		}
	}
}
