#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;

struct Node {
	int t,m,p;
	bool operator <(const Node b) const {
		return t+p>b.t+b.p;
	}
};
struct node {
	int t,m,p;
	void operator =(const Node b) {
		t=b.t,m=b.m,p=b.p;
	}
};

priority_queue<Node>q;
queue<node>wait;
vector<node>p1;

int main() {
	int t,m,p;
	while(scanf("%d%d%d",&t,&m,&p)&&t+m+p!=0){
		
	}
}

