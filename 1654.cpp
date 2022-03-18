#include<bits/stdc++.h>
using namespace std;
char a[60];
int main(){
	int n;
	cin>>n;
	for(int b=0;b<n;b++){
		cin>>a;
		long long c=strlen(a);
		if (a[c-1]=='0'||a[c-1]=='2'||a[c-1]=='4'||a[c-1]=='6'||a[c-1]=='8'){
			cout<<"even"<<endl;
		}else{
			cout<<"odd"<<endl;
		}
	}
	return 0;
}
