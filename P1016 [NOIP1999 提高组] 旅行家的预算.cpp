/*һ�����м����ʻ���������ٵķ��ô�һ�����е���һ�����У��������ʱ�����ǿյģ���
������������֮��ľ���D1���������������C������Ϊ��λ����ÿ����������ʻ��
����D2��������ÿ�����ͼ۸�P����;��վ��N��N����Ϊ�㣩����վi�������ľ���Di��
ÿ�����ͼ۸�Pi��i=1,2,��N��������������������С�������λ������޷�����Ŀ�ĵأ�
�������No Solution����

�����ʽ
��һ�У�D1��C��D2��P��N��

��������N�С�

��i+1�У��������֣���վi�������ľ���Di��ÿ�����ͼ۸�Pi��

�����ʽ
������С���ã�����������������С�������λ������޷�����Ŀ�ĵأ��������No Solution��*
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
