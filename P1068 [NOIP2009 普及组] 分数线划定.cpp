#include<bits/stdc++.h>
using namespace std;
int n,m;
struct Node{
	int k,s;
}a[5000000];
bool cmp(const Node a,const Node b){
	return a.s>b.s||a.s==b.s&&a.k<b.k;
}
int main(){
	cin>>n>>m;
	for(int b=1;b<=n;b++){
		scanf("%d%d",&a[b].k,&a[b].s);
	}
	sort(a+1,a+n+1,cmp);
	m=m*1.5;
	while(a[m].s==a[m+1].s){
		m++;
	}
	cout<<a[m].s<<" "<<m<<endl;
	for(int b=1;b<=m;b++){
		cout<<a[b].k<<" "<<a[b].s<<endl;
	}
}
