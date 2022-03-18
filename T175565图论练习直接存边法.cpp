#include<bits/stdc++.h>
using namespace std;
struct Node {
	int a,b;
} a[100005];
int n,m,q;
bool aaa(int a1,int b) {
	for(int c=1; c<=m; c++) {
		if(a[c].a==a1&&a[c].b==b) {
			return true;
		}
	}
	return false;
}
int main() {

	cin>>n>>m>>q;
	int h,h1;
	for(int b=1; b<=m; b++) {
		scanf("%d%d",&h,&h1);
		a[b].a=h,a[b].b=h1;
	}
	int q1,p;
	for(int b=1; b<=q; b++) {
		scanf("%d%d",&q1,&p);
		if(aaa(q1,p)||aaa(p,q1)) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
}
