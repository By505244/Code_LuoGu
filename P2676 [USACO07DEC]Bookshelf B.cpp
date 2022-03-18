#include <bits/stdc++.h>
using namespace std;
int n, b1, a[20006], ans = 0;
bool cmd(int a, int b) { return a > b; }
int main() {
    cin >> n >> b1;
    for (int b = 1; b <= n; b++) {
        cin >> a[b];
    }
    sort(a + 1, a + n + 1, cmd);
    int h=0;
    for(int b=1;b<=n;b++){
    	if(h>b1){
    		cout<<ans;
    		return 0;
		}
		h=h+a[b];
		ans++;
	}
    return 0;
}
