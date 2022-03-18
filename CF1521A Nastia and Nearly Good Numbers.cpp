#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		int a,b;
		scanf("%d%d",&a,&b);
		if(b>=2) {
			printf("YES\n%d %d %d\n",a,a*(b-1),a*b);
		} else if(a>=2){
			printf("YES\n%d %d %d\n",b,b*(a-1),a*b);
		}else{
			printf("NO\n");
		}
	}
}

