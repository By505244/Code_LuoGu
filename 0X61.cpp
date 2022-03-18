#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
const int N = 100010, M = 1000010;
int head[N], ver[M], edge[M], Next[M], d[N];
bool v[N];
int n, m, tot;
priority_queue< pair<int, int> > q;

void add(int x, int y, int z) {
	ver[++tot] = y, edge[tot] = z, Next[tot] = head[x], head[x] = tot;
}

void dijkstra() {
	memset(d, 0x3f, sizeof(d)); 
	memset(v, 0, sizeof(v)); 
	d[1] = 0;
	q.push(make_pair(0, 1));
	while (q.size()) {
		int x = q.top().second; q.pop();
		if (v[x]) continue;
		v[x] = 1;
		for (int i = head[x]; i; i = Next[i]) {
			int y = ver[i], z = edge[i];
			if (d[y] > d[x] + z) {
				d[y] = d[x] + z;
				q.push(make_pair(-d[y], y));
			}
		}
	}
}

int main() {
	cin >> n >> m;
	int sss;
	cin>>sss;
	for (int i = 1; i <= m; i++) {
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		add(x, y, z);
	}
	dijkstra();
	for (int i = 1; i <= n; i++)
		printf("%d\n", d[i]);
}
