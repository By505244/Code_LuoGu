#include <bits/stdc++.h>
using namespace std;
int h, n, f[30], s[30], t[30], ans;
struct Node {
    int sum, ti, t, h;
};
bool operator<(const Node& a, const Node& b) { return a.sum < b.sum && a.ti < b.ti || a.t < b.t; }
priority_queue<Node> q;
int main() {
    cin >> n >> h;
    h = h * 60;
    for (int b = 1; b <= n; b++) {
        cin >> f[b];
    }
    for (int b = 1; b <= n; b++) {
        cin >> s[b];
    }
    for (int b = 1; b < n; b++) {
        cin >> t[b];
        t[b] = 5 * t[b];
    }
    Node a, b;
    a.h = 1, a.t = 0;
    a.ti = 0, a.sum = 0;
    q.push(a);
    while (!q.empty()) {
        a = q.top();
        q.pop();
        if (a.ti >= h) {
            ans = max(ans, a.sum);
            // cout<<ans<<endl;
            continue;
        }
        b = a;
        int m = f[a.h] - (a.t * s[a.h]);
        if (m > 1) {
            a.t++, a.sum = a.sum + m, a.ti = a.ti + 5;
            if (a.sum >= ans || a.ti < h) {
                q.push(a);
            }
            a = b;
        }
        // cout<<m<<" "<<a.sum<<" "<<a.h<<" "<<a.t<<" "<<endl;
        if (a.h < n) {
            a.h++, a.ti = a.ti + t[a.h - 1], a.t = 0;
            if (a.sum >= ans || a.ti < h) {
                q.push(a);
            }
        }
    }
    cout << ans;
}
