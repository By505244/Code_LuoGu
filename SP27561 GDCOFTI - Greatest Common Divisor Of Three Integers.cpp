#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b,c;
	cin>>a>>b>>c;
	int ans=__gcd(a,b);
	ans=__gcd(ans,c);
	cout<<ans;
}
