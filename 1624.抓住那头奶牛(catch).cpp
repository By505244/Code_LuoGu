#include <bits/stdc++.h>
using namespace std;
bool flag[200005];
struct Node {
	int x, y;
} t, tt;
queue<Node> q;
int main() {
	int h;
	cin>>h;
	for(int b=1; b<=h; b++) {
		int k, n;
		cin >> k >> n;
		for(int b1=0;b1<=200005;b1++){
			flag[b1]=0;
		}
		while(!q.empty()){
			q.pop();
		}
		t.x = k;
		t.y = 0;
		flag[k] = 1;
		q.push(t);
		while (!q.empty()) {
			t = q.front();
			q.pop();
			// cout<<t.y<<endl
			if (t.x == n) {
				cout << t.y<<endl;
				break;
			}
			t.y++;
			if (t.x + 1 <= n + 1 && !flag[t.x + 1]) {
				t.x = t.x + 1, q.push(t), t.x = t.x - 1;
				flag[t.x + 1] = 1;
			}
			if (t.x - 1 >= 0 && !flag[t.x - 1]) {
				t.x = t.x - 1, q.push(t), t.x = t.x + 1;
				flag[t.x - 1] = 1;
			}
			if (t.x * 2 <= 2 * n && !flag[t.x * 2]) {
				t.x = t.x * 2, q.push(t), t.x = t.x / 2;
				flag[t.x * 2] = 1;
			}
		}
	}
}
