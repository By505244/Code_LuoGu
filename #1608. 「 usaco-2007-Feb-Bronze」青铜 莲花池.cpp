#include <bits/stdc++.h>
using namespace std;
int m, n, m1, m2, a[35][35];
bool flag[35][35];
struct Node {
    int x, y, sum;
} g, gg;

queue<Node> q;
void ll(int x, int y, int sum) {
    Node g;
    g.x = x;
    g.y = y;
    g.sum = sum;
    if (flag[g.x][g.y] && g.x > 0 && g.x <= m && g.y > 0 && g.y <= n) {
        g.sum++;
        q.push(g);
        flag[g.x][g.y] = 0;
    }
    return;
}
int main() {
    cin >> m >> n >> m1 >> m2;
    for (int b = 1; b <= m; b++) {
        for (int c = 1; c <= n; c++) {
            cin >> a[b][c];
            if (a[b][c] == 3) {
                g.x = b;
                g.y = c;
            } else if (a[b][c] == 4) {
                gg.x = b;
                gg.y = c;
                flag[b][c] = 1;
            } else if (a[b][c] == 1) {
                flag[b][c] = 1;
            } else if (a[b][c] == 0 || a[b][c] == 2) {
                flag[b][c] = 0;
            }
        }
    }
    g.sum = 0;
    q.push(g);
    while (!q.empty()) {
        // cout<<g.sum<<endl;
        g = q.front();
        q.pop();  // cout<<g.x<<" "<<g.y<<endl;
        /*if(g.sum==4){
                return 0;
        }*/

        if (g.x == gg.x && g.y == gg.y) {
            cout << g.sum;
            // cout<<g.x<<" "<<g.y;
            return 0;
        }

        ll(g.x + m2, g.y + m1, g.sum);
        ll(g.x - m2, g.y + m1, g.sum);
        ll(g.x + m2, g.y - m1, g.sum);
        ll(g.x - m2, g.y - m1, g.sum);
        ll(g.x + m1, g.y + m2, g.sum);
        ll(g.x - m1, g.y + m2, g.sum);
        ll(g.x + m1, g.y - m2, g.sum);
        ll(g.x - m1, g.y - m2, g.sum);
    }
    return 0;
}
