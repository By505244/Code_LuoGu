#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
struct Node {
	int st,fin,ans,k;
	bool operator <(const Node b)const {
		return st<b.st;
	}
} a[500005];
struct node{
	int fin,k;
	bool operator <(const node b)const {
		return fin>b.fin;
	}
};
bool cmp(const Node a,const Node b) {
	return a.k<b.k;
}
priority_queue<node>q;
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)scanf("%d%d",&a[i].st,&a[i].fin),a[i].k=i;
	int sum=1;
	sort(a+1,a+n+1);
	bool flag;
	node bbb;
	bbb.fin=0,bbb.k=1;
	q.push(bbb);
	for(int i=1; i<=n; i++) {
		node b=q.top();
		q.pop();
		if(b.fin<a[i].st){
			a[i].ans=b.k;
			b.fin=a[i].fin;
			q.push(b);
		}else{
			//cout<<b.fin<<" "<<b.k<<endl;
			q.push(b);
			sum++;
			b.fin=a[i].fin,b.k=sum,a[i].ans=sum;
			q.push(b);
		}
	}
	sort(a+1,a+n+1,cmp);
	printf("%d\n",sum);
	for(int i=1; i<=n; i++)printf("%d\n",a[i].ans);
}

