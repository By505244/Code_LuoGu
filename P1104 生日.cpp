#include<bits/stdc++.h>
using namespace std;
struct Node{
	int y,m,d;
	string a;
}a[5001];
bool cmp(const Node a,const Node b){
	return a.y<b.y||a.y==b.y&&a.m<b.m||a.y==b.y&&a.m==b.m&&a.d<b.d||a.y==b.y&&a.m==b.m&&a.d==b.d&&a.a<b.a;
}
int main(){
	int n;
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b].a;
		cin>>a[b].y>>a[b].m>>a[b].d;
	}
	sort(a+1,a+n+1,cmp);
	for(int b=1;b<=n;b++){
		cout<<a[b].a<<endl;
	}
}
