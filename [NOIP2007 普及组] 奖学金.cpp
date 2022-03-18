#include<bits/stdc++.h>
using namespace std;
struct Node {
	int chinese,sum,num;
} a;
priority_queue<Node>q;
bool operator<(const Node a,const Node b) {
	return a.sum<b.sum||a.chinese<b.chinese&&a.sum==b.sum||a.num>b.num&&a.sum==b.sum&&a.chinese==b.chinese;
}
int main() {
	int n;
	cin>>n;
	for(int b=1; b<=n; b++) {
		a.sum=0;
		a.num=b;
		cin>>a.chinese;
		int a1;
		a.sum=a.sum+a.chinese;
		for(int b1=1; b1<=2; b1++) {
			cin>>a1;
			a.sum=a.sum+a1;
		}
		q.push(a);
	}
	for(int b=1; b<=5; b++) {
		a=q.top();
		q.pop();
		cout<<a.num<<" "<<a.sum<<endl;
	}
	return 0;
}
