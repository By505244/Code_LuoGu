#include<bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int main(){
	cin>>n;
	n*=2;
	for(int i=1;i<=n/2;i++){
		for(int b=i+1;b<=n;b++){
			if((b+i)*(b-i+1)==n){
				cout<<i<<" "<<b<<endl;
			}else if((b+i)*(b-i+1)>n){
				break;
			}
		}
	}
}

