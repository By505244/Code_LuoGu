#include<bits/stdc++.h>
using namespace std;
float f[100005];
int main() {
	float n,w;
	cin>>w>>n;
	for(register int i=1; i<=100004; i++) {
		f[i]=0x7fff;
	}
	float ans=0x7fff;
	for(register int b=1; b<=n; b++) {
		register float v,wi;
		scanf("%f%f",&v,&wi);
		for(register int i=v; i<=w+v-1; i++) {
			f[i]=min(f[i],f[int(i-v)]+wi);
			if(i>=w) {
				ans=min(ans,f[i]);
			}
		}
	}
	printf("%.2lf",ans);
}

