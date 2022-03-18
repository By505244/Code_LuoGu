
#include<bits/stdc++.h>
using namespace std;
int sum=1,n,c;
void d(int h) {
	for(int b=1; b<=h/2; b++) {
		sum++;
		if(b/2>=1) {
			d(b);
		}
	}
}
int main() {
	freopen("P1028 [NOIP2001 普及组] 数的计算 打表代码.txt","w",stdout) ;
	cin>>n;
	for(int b=1; b<=n; b++) {
		sum=1;
		d(b);
		cout<<sum<<","; 
	}
}
