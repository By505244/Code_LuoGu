#include<bits/stdc++.h>
using namespace std;
int n,k;
char a[1500000];
int bi[29];
int s[29];
bool hu[1500000];
int main(){
	cin>>n>>k;
	cin>>a;
	int sum=0;
	for(int b=0;b<n;b++){
		bi[a[b]-96]++;
	}
	for(int b=1;b<=26;b++){
		if(sum==k){
			break;
		}
		while(bi[b]!=0){
			s[b]++;
			sum++;
			bi[b]--;
			if(sum==k){
				break;
			}
		}
	}
	for(int b=0;b<n;b++){
		//cout<<int(a[b])<<endl;
		if(s[a[b]-96]==0){
			cout<<a[b];
		}else {
			s[a[b]-96]--;
		}
	}
} 
