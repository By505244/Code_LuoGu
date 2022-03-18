#include<bits/stdc++.h>
using namespace std;
struct Node{
	int mo,z;
	double xj;
}a[105];
bool cmp(const Node a,const Node b){
	return a.xj>b.xj;
}
int main(){
	int n,t;
	cin>>n>>t;
	for(int b=1;b<=n;b++){
		cin>>a[b].z>>a[b].mo;
		a[b].xj=a[b].mo*1.0000/a[b].z;
		//cout<<a[b].xj<<endl;
	}
	sort(a+1,a+n+1,cmp);
	double ans=0.00;
	int b=1;
	while(t>0&&b<=n){
		if(t>=a[b].z){
			t-=a[b].z;
			ans+=a[b].mo;
			b++;
		}else{
			ans+=a[b].xj*t*1.0000;
			t=0;
			b++;
		}
	}
	printf("%.2lf",ans);
}
