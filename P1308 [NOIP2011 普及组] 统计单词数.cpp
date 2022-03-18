#include<bits/stdc++.h>
//#define int long long
//#define int short
using namespace std;
char a[1000050],s[15];
int first_ANS=-1,sum_ANS;
int main() {
	cin>>s;
	char h[32];
	gets(h);
	gets(a);
	int a_l=strlen(a);
	int s_l=strlen(s);
	for(int b=0; b<a_l; b++) {
		if(a[b]==' ') {
			continue;
		} else {
			bool flag=0;
			for(int i=0; i<s_l; i++) {
				if(a[b+i]+32!=s[i]&&a[b+i]!=s[i]&&a[b+i]-32!=s[i]) {
					flag=1;
				}
			}
			if(flag==0&&(a[b+s_l]==' '||b+s_l>=a_l)) {
				if(b-1>=0) {
					if(a[b-1]==' ') {
						if(first_ANS==-1) {
							first_ANS=b;
						}
						sum_ANS++;
					}
				} else {
					if(first_ANS==-1) {
						first_ANS=b;
					}
					sum_ANS++;
				}
			}
		}
	}
	if(sum_ANS==0){
		printf("-1");
	}else{
		printf("%d %d",sum_ANS,first_ANS);
	}
}

