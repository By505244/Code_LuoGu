#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;
int main() {
	char a[20];
	cin>>a;
	int ans=0,sum=1,h;
	for(int b=0; b<=10; b++) {
		if(b==1||b==5) {
			continue;
		} else {
			h=int(a[b]-48);
			h=h*sum;
			sum++;
			ans=ans+h;
		}
	}
	ans=ans%11;
	if(ans==int(a[12]-48)) {
		cout<<"Right";
	} else if(a[12]!='X'||ans!=10) {
		for(int b=0; b<=11; b++) {
			cout<<a[b];
		}
		if(ans==10) {
			cout<<"X"<<endl;
		} else {
			cout<<ans<<endl;
		}
	} else {
		cout<<"Right";
	}
	return 0;
}
