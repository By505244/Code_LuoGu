#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[999];
	cin>>a;
	int b;
	b=strlen (a);
	for(int c=0;c<b;c++){
		if(a[c]>='A'&&a[c]<='Z'){
			cout<<a[c];
		}
		else if(a[c]>='a'&&a[c]<='z'){
			cout<<a[c];
		}
	}
}
