#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;
int main() {
	int n,op,x;
	cin>>n;
	for(int b=1; b<=n; b++) {
		cin>>op;
		if(op==1) {
			cin>>x;
			q.push(-x);
		} else if(op==2) {
			int h=q.top();
			h=-h;
			cout<<h<<endl;
		} else if(op==3) {
			q.pop();
		}
	}
}
