#include <bits/stdc++.h>
using namespace std;
int m, n, a[20][20];
bool ans[20][20], flag = 0;
struct Node {
    int x, y;
} st, fin;
Node q[10000000];
void hy() {
    for (int b = 1; b <= m; b++) {
        for (int b1 = 1; b1 <= n; b1++) {
            ans[b][b1] = 0;
        }
    }
}
void dfs(int x, int y, int k) {
    if (x == fin.x && y == fin.y) {
        flag = 1;
        for (int b = 1; b <= k; b++) {
            if (b != 1) {
                cout << "->";
                cout << "(" << q[b].x << "," << q[b].y << ")";
            } else {
                cout << "(" << q[b].x << "," << q[b].y << ")";
            }
        }
        cout << endl;
        return;
    }
    // xÐÐ£¬yÁÐ
	if (a[x][y - 1] && !ans[x][y - 1]) {
        ans[x][y - 1] = 1;
        q[k + 1].x = x;
        q[k + 1].y = y - 1;
        dfs(x, y - 1, k + 1);
        ans[x][y - 1] = 0;
    }
    if (a[x - 1][y] && !ans[x - 1][y]) {
        ans[x - 1][y] = 1;
        q[k + 1].x = x - 1;
        q[k + 1].y = y;
        dfs(x - 1, y, k + 1);
        ans[x - 1][y] = 0;
    }if (a[x][y + 1] && !ans[x][y + 1]) {
        ans[x][y + 1] = 1;
        q[k + 1].x = x;
        q[k + 1].y = y + 1;
        dfs(x, y + 1, k + 1);
        ans[x][y + 1] = 0;
    }
    if (a[x + 1][y] && !ans[x + 1][y]) {
        ans[x + 1][y] = 1;
        q[k + 1].x = x + 1;
        q[k + 1].y = y;
        dfs(x + 1, y, k + 1);
        ans[x + 1][y] = 0;
    }
    
    
    
    return;
}
int main() {
    cin >> m >> n;
    for (int b = 1; b <= m; b++) {
        for (int b1 = 1; b1 <= n; b1++) {
            cin >> a[b][b1];
        }
    }

    cin >> st.x >> st.y >> fin.x >> fin.y;
    ans[st.x][st.y] = 1;
    q[1].x = st.x, q[1].y = st.y;
    dfs(st.x, st.y, 1);
    if (!flag) {
        cout << "-1";
    }
    return 0;
}
