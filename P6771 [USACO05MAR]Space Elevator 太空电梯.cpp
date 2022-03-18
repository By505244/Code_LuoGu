#include<bits/stdc++.h>
using namespace std;
struct Node {
	int h,a,c,b1,a1[10005];
} a[10005];
int f[50000],sum;
bool cmp(const Node a,const Node b) {
	return a.a<b.a;
}
bool cmpc(const int a,const int b){
	return a>b;
}
int main() {
	int n;
	cin>>n;
	for(int b=1; b<=n; b++) {
		scanf("%d%d%d",&a[b].h,&a[b].a,&a[b].c);
		int b1=1,b2;
		sum=0;
		for(b2=1; sum<=a[b].c; b2*=2) {
			a[b].a1[b1]=b2;
			sum+=b2;
			b1++;
		}
		b2=b2/2;
		if(sum>=a[b].c) {
			sum=sum-b2;
			--b1;
		}
		//cout<<sum<<endl;
		a[b].a1[b1]=a[b].c-sum;
		if(a[b].a1[b1]==0) {
			b1--;
		}
		a[b].b1=b1;
		//sort(a[b].a1+1,a[b].a1+b1+1,cmpc);
	}//
	sort(a+1,a+1+n,cmp);
	for(int b=1; b<=n; b++) {
		for(int h= 1; h<=a[b].b1; ++h) {
			for(int i=a[b].a;i>=a[b].h*a[b].a1[h];i--){
				f[i]=max(f[i],f[i-a[b].h*a[b].a1[h]]+a[b].h*a[b].a1[h]);
			}
		}
	}
	int ans=-1,ans1;
	for(int b=0; b<=40005; b++) {
		if(f[b]>ans) {
			ans=f[b],ans1=b;
		}
		cout<<b<<" "<<f[b]<<endl;
	}
	cout<<ans<<endl;
}
