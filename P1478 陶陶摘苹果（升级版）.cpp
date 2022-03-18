#include <bits/stdc++.h>
using namespace std;
struct Node{
	int a,b;
}a[5005];
bool cmp(const Node a,const Node b){
	return a.b<b.b;
}
int main() {
    int n,s;
    cin>>n>>s;
    int a1,b;
    cin>>a1>>b;
    for (int c=1;c<=n; c++) {
        cin>>a[c].a>>a[c].b;
    }
    sort(a+1,a+n+1,cmp);
    int ans=0;
    for(int i=1;i<=n;i++){
    	if(a[i].a<=a1+b&&s>=a[i].b){
    		s-=a[i].b;
    		ans++;
		}
	}
	cout<<ans;
    return 0;
}
