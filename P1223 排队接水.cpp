#include<bits/stdc++.h>
using namespace std;
struct Node{
	int h,ti;
}a[4000000];
bool cmp(const Node a,const Node b){
	return a.ti<b.ti||a.ti==b.ti&&a.h<b.h;
}
int main(){
	int n;
	cin>>n;
	for(int b=1;b<=n;b++){
		a[b].h=b;
		scanf("%d",&a[b].ti);
	}
	int sum=n;
	sort(a+1,a+n+1,cmp);double ans=0;
	for(int b=1;b<=n;b++){
		cout<<a[b].h<<" ";
		ans+=a[b].ti*(n-b);
	}
	ans=ans/n;
	cout<<endl;
	printf("%0.2lf",ans);
}
