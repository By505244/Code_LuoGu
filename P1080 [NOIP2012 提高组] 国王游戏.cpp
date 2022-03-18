#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
struct Node{
	int sum;
	int a,b;
}a[10005]; 
bool cmp(const Node a,const Node b){
	return a.sum<b.sum; 
}
struct longs {
	char a[10005];
	int side;
	void add() {
		cin>>a;
		side=strlen(a);
		for(int i=0; i<side; i++) {
			a[i]-='0';
		}
	}
	void clean() {
		for(int i=0; i<=10004; i++)a[i]=0;
		side=0;
	}
	void fz() {
		char b[10005];
		for(int i=0; i<side; i++) {
			b[i]=a[i];
		}
		for(int i=side-1; i>=0; i--) {
			a[i]=b[side-i-1];
		}
		return;
	}
	void output() {
		for(int i=0; i<side; i++) {
			cout<<int(a[i]);
		}
	}
	Node operator +(const Node &h) const{
		Node c=h;
		Node d;
		for(int i=0;i<side;i++)d.a[i]=a[i];
		d.side=side;
		d.fz();
		c.fz();
		Node ans;
		ans.clean();
		int l=0;
		for(int i=0; i<max(side,h.side); i++) {
			if(c.a[i]+d.a[i]+ans.a[i]>=10) {
				ans.a[i+1]=1;
				ans.a[i]+=c.a[i]+d.a[i]-10;
			} else {
				ans.a[i]+=c.a[i]+d.a[i];
			}
		}
		if(ans.a[max(c.side,d.side)]!=0) {
			ans.side=(max(c.side,d.side)+1);
		} else {
			ans.side=max(c.side,d.side);
		}
		ans.fz();
		return ans;
	}
};
int main(){
	int n;
	int c,b;
	cin>>n;
	cin>>c>>b;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a[i].a,&a[i].b);
		a[i].sum=a[i].a*a[i].b;
	}
	sort(a+1,a+n+1,cmp);
	long double sum=c;
	long double ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,sum/a[i].b);
		sum*=a[i].a;
	}
	cout<<ans;
}

