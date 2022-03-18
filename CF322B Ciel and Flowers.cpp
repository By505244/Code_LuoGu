#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int main() {
	int r,g,b;
	cin>>r>>g>>b;
	int ans=min(r,min(g,b));
	int r1=r-ans;
	int g1=g-ans;
	int b1=b-ans;
	ans+=r1/3+(g1/3)+(b1/3);
	int ans2=min(r,min(g,b))-1;
	if(ans2>=0) {
		int r2=r-ans2;
		int g2=g-ans2;
		int b2=b-ans2;
		ans2+=r2/3+(g2/3)+(b2/3);
	}
	cout<<max(ans,ans2);
}

