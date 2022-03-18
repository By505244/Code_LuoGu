#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;
char s[1005],a[1005];
using namespace std;
int main() {
	freopen("a.txt","r",stdin);
	int aa;
	cin>>aa;
	char hh[50];
	sprintf(hh,"%d.in",aa);
	freopen(hh,"r",stdin);
	sprintf(hh,"%d.out",aa);
	freopen(hh,"w",stdout);
	cin>>s;
	int n;
	cin>>n;
	int ans=0;
	for(int i=1; i<=n; i++) {
		bool flag=1;
		for(int b=0; b<=1004; b++)a[b]=0;
		cin>>a;
		for(int b=0; b<strlen(a); b++) {
			if(a[b]!=s[b]&&s[b]!='#') {
				flag=0;
				break;
			}
		}
		if(flag==1)ans++;
	}
	cout<<ans;
}

