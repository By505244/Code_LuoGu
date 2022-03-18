#include<bits/stdc++.h>
using namespace std;
struct Node {
	int price,num;
	double ave;
} a[50005];
long long x;
bool cmp(const Node a,const Node b) {
	return a.ave<b.ave||a.ave==b.ave&&a.num>b.num;
}
double ans,ansp;
int main() {
	int n;
	cin>>n>>x;
	for(int b=1; b<=n; b++) {
		scanf("%d%d",&a[b].num,&a[b].price);
		a[b].ave=double(a[b].price)/double(a[b].num);
	}
	sort(a+1,a+n+1,cmp);
	int b=1;
	while(x>ans) {
		if(ans+a[b].num<x) {
			ansp+=a[b].price;
			ans+=a[b].num;
			b++;
			continue;
		}
		if(ans+a[b].num==x) {
			ansp+=a[b].price,ans+=a[b].num;
			break;
		}
		if(ans+a[b].num>x) {
			ansp+=double(a[b].ave*(x-ans)),ans+=a[b].num;
			break;
		}
	}
	printf("%.2lf",ansp);
}
