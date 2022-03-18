/*一个旅行家想驾驶汽车以最少的费用从一个城市到另一个城市（假设出发时油箱是空的）。
给定两个城市之间的距离D1、汽车油箱的容量C（以升为单位）、每升汽油能行驶的
距离D2、出发点每升汽油价格P和沿途油站数N（N可以为零），油站i离出发点的距离Di、
每升汽油价格Pi（i=1,2,…N）。计算结果四舍五入至小数点后两位。如果无法到达目的地，
则输出“No Solution”。

输入格式
第一行，D1，C，D2，P，N。

接下来有N行。

第i+1行，两个数字，油站i离出发点的距离Di和每升汽油价格Pi。

输出格式
所需最小费用，计算结果四舍五入至小数点后两位。如果无法到达目的地，则输出“No Solution”*
***********************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;
struct Node {
	double p,d;
};
Node a[5000000];
struct rec {
	int w,d,y;
} now;
double d1,c,d2,p,n;
double ans=0;
int find(int a1,int b1){
	double ans1=10000,ans2=10000;
	double sum=0.00;
	for(int b=b1;a[b].d+sum<=c*d2;b++){
		sum+=a[b].d;
		if(a[b].p<ans2){
			ans2=a[b].p,ans1=b;
		}
	}
	return ans1;
int main() {
	now.w=1;
	cin>>d1>>c>>d2>>a[1].p>>n;
	for(int b=2; b<=n+1; b++) {
		scanf("%lf%lf",&a[b].d,&a[b].p);
		if(b>=2) {
			a[b].d=a[b].d-a[b-1].d;
		}
	}
	while(now.w<=n) {
		if(c*d2<a[now.w+1].d) {
			cout<<"No Solution";
			return 0;
		}
		if(a[now.w+1].p<a[now.w].p){
			ans+=a[now.w].p*(a[now.w+1].d-(now.y*d2));
			cout<<a[now.w].p*(a[now.w+1].d-(now.y*d2))<<" ";
			now.y=a[now.w+1].d/d2;
			now.w++;
		}else {
			int x=find
			now.y=c;
			now.y=now.y-(a[now.w+1].d/d2);
			now.w++;
			now.d=now.d+a[now.w].d;
			ans+=c*a[now.w-1].p;
		}
	}
	printf("%.2lf",ans);
	return 0;
}                                                                                                        
