#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int s,f;
}a[150000];
bool cmp(const Node a,const Node b){
	return a.f<b.f;
}
int b1,ans;
int main(){
	cin>>n;
	for(int b=1;b<=n;b++){
		scanf("%d%d",&a[b].s,&a[b].f);
	}
	sort(a+1,a+n+1,cmp);
	b1=a[1].f;
	for(int b=2;b<=n;b++){
		if(a[b].s>=b1){
			b1=a[b].f;
			ans++;
		}
	}
	cout<<ans+1; 
}
