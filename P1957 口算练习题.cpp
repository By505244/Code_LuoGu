#include<bits/stdc++.h>
using namespace std;

char a[1000];
int main() {
	int n;
	char last;
	cin>>n;
	for(int b=1; b<=n; b++) {
		int s,d;
		cin>>a;
		if(a[0]<'a'||a[0]>'z'){
			sscanf(a,"%d",&s);
			cin>>d;
			a[0]=last;
		}else{
			cin>>s>>d;
			last=a[0];
		}
		char ans[100];
		memset(ans,0,sizeof(ans));
		if(a[0]=='a'){
			sprintf(ans,"%d+%d=%d",s,d,s+d);
		}else if(a[0]=='b'){
			sprintf(ans,"%d-%d=%d",s,d,s-d);
		}else if(a[0]=='c'){
			sprintf(ans,"%d*%d=%d",s,d,s*d);
		}
		cout<<ans<<endl<<strlen(ans)<<endl; 
	}
}
