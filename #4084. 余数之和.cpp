#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, j = 0, j1, a;
    cin >> n >> k;
    for (a = 2; a <= n; a++) {
        j1 =k-a*(k/a);
        j = j1 + j;
        if(a>k){
        	j+=k*(n-a);
        	break;
		}
    }
    cout << j;
}
