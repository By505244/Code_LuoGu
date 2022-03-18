#include <bits/stdc++.h>
using namespace std;
int up[1000005], d[1000005]/*.R*/, n, k, ltup, rtup, ltd, rtd, sr[1000005], jd, maxn[1000005], minn[100005], a1, i1;
int main() {
	//freopen("wen.txt","w",stdout);
	cin >> n >> k;
	for (int b = 0; b < n; ++b) {
		cin >> sr[b];
	}
	int b = 1;
	up[0] = sr[0];
	d[0] = sr[0];
	while (1) {
		if (sr[up[rtup]] < sr[b]) {
			++rtup;
			up[rtup] = b;
		} else {
			while (sr[up[rtup]] > sr[b] && rtup != 0) {
				rtup--;
			}
			++rtup;
			up[rtup] = b;
		}
		if (sr[d[rtd]] > sr[b]) {
			++rtd;
			d[rtd] = b;
		} else {
			while (sr[d[rtd]] < sr[b] && rtup != 0) {
				--rtd;
			}
			++rtd;
			d[rtd] = b;
		}
		if (b >= jd + k) {
			while (up[ltup] < sr[jd + k]) {
				ltup++;
			}
			maxn[a1] = sr[up[ltup] - 1];
			minn[i1] = sr[d[ltd]];
			if (ltd == jd) {
				ltd++;
			}
			i1++;
			a1++;
			jd++;
		}
		++b;
		if (b >= n) {
			break;
		}
	}
	for (int c = 0; c < n; c++) {
		cout << maxn[c] << " ";
	}
	cout << endl;
	for (int c = 0; c < n; c++) {
		cout << minn[c] << " ";
	}
	return 0;
}

