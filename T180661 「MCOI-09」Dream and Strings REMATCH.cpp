#include<bits/stdc++.h>
#define ll long long int 
const int INF = 0x7fffffff;

using namespace std;
struct Node {
	char a[10005];
	int side;
	void add() {
		scanf("%s",&a);
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
	Node operator +(Node &h) {
		h.fz();
		fz();
		Node ans;
		ans.clean();
		int l=0;
		for(int i=0; i<max(side,h.side); i++) {
			if(a[i]+h.a[i]+ans.a[i]>=10) {
				ans.a[i+1]=1;
				ans.a[i]+=a[i]+h.a[i]-10;
			} else {
				ans.a[i]+=a[i]+h.a[i];
			}
		}
		if(ans.a[max(side,h.side)]!=0) {
			ans.side=(max(side,h.side)+1);
		} else {
			ans.side=max(side,h.side);
		}
		h.fz();
		fz();
		ans.fz();
		return ans;
	}
};
int main(){
	int t;
	scanf("%d",&t);
	for(int bb=1;bb<=t;bb++){
		int n;
		scanf("%d",&n);
		ll sum =0;
		for(int i=1;i<=n;i++){
			Node a;
			a.add();
			sum=sum+a;
		}
		if(sum>n||sum==0){
			printf("-1");
			continue; 
		}else{
			
		}
	}
}

