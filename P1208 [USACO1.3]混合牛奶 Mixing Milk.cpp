#include<bits/stdc++.h>
using namespace std;
struct Node{
	int p,a;
}a[100000000];
bool cmp(const Node a,const Node b){
	return a.p<b.p;
}
int b1=1,ans;
int main(){
	int n,m;
	cin>>m>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b].p>>a[b].a;
	}
	sort(a+1,a+n+1,cmp);
	while(m!=0){
		if(a[b1].a==0){
			b1++;
		}
		ans=a[b1].p+ans;
		a[b1].a--;
		m--;
	}
	cout<<ans;
	return 0;
}
