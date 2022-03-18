#include<bits/stdc++.h>
using namespace std;
int n,d;
struct Node{
	int x,y;
}is[1005];
struct rec{
	double l,r;
}a[1005];
double db(int y){
	return sqrt(d-(y*y));
}
bool cmp(const rec a,const rec b){
	return a.l<b.l;
}
int main(){
    int aaaaa=0;
	while(scanf("%d%d",&n,&d)==2&&(n!=0&&d!=0)){
	    aaaaa++;
		bool flag=0;
		d*=d;
		for(int i=1;i<=n;i++){
			scanf("%d%d",&is[i].x,&is[i].y);
			a[i].l=is[i].x-db(is[i].y);
			a[i].r=is[i].x+db(is[i].y);
			if(is[i].y>sqrt(d)){
				printf("-1");
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
		int ans=0;
		sort(a+1,a+n+1,cmp);
		a[0].r=-0x7fffffff;
		double l=-0x7fffffff,r=-0x7fffffff;
		for(int i=1;i<=n;i++){
			if(a[i].l<=r){
				l=max(a[i].l,l);
				r=min(a[i].r,r);
			}else if(a[i].l>r){
				ans++;
				l=a[i].l,r=a[i].r;
			}
		}
		printf("Case %d: %d\n",aaaaa,ans);
	}
}

