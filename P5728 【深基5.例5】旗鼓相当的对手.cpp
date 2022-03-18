#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1000][3],ans=0;
	cin>>n;
	for(int s=0;s<n;s++)
	{
		cin>>a[s][0]>>a[s][1]>>a[s][2];
	    for(int m=0;m<s;m++)
	    {
		    if(abs(a[s][0]-a[m][0])>5||\
			abs(a[s][1]-a[m][1])>5||\
			abs(a[s][2]-a[m][2])>5||\
			abs(a[s][0]+a[s][1]+a[s][2]-a[s][0]-a[s][1]-a[s][2])>10)continue;
            ans++;
		}
	}
    cout<<ans;		
	return 0;
}