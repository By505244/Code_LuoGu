#include<bits/stdc++.h>
using namespace std;
struct Node{
	int a,sum;
};
queue<Node>q;
struct rec{
	int b,a[20005];
};
rec a[20005];
Node h;

int main(){
	int n,m;
	cin>>n>>m;
	for(int b=1;b<=m;b++){
		int m,m1;
		scanf("%d%d",&m,&m1);
		a[m].a[a[m].b++]=m1;
		a[m1].a[a[m1].b++]=m;
	}
	h.a=1;
	q.push(h);
	while(!q.empty()){
		h=q.front();
		q.pop();
		if(h.a==n){
			cout<<h.sum-1;
			return 0;
		}
		for(int b=0;b<a[h.a].b;b++){
			int h1=h.a;
			h.a=a[h.a].a[b];
			h.sum++;
			q.push(h);
			h.sum--;
			h.a=h1;
		}
	}
}
