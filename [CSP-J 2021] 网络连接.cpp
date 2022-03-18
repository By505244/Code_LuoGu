#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int QwQ=0;
class Node {
	public:
		int s_c;
		bool in() {
			sum=0;
			string Server;
			cin>>Server;
			if(Server=="Server")s_c=++QwQ;
			else s_c=0;
			//printf("%d\n",s_c);
			char ips[100];
			scanf("%s",&ips);
			unsigned long long Ip=0;
			int sum1=0,sum2=0;
			for(int i=0; i<strlen(ips); i++) {
				if(ips[i]!='.'&&ips[i]!=':') {
					Ip=(Ip<<1)+(Ip<<3)+(ips[i]^48);
				}
				if(ips[i]=='.'||ips[i]==':'||i==strlen(ips)-1) {
					if(ips[i]=='.')sum1++;
					else if(ips[i]==':')sum2++;
					if(i==strlen(ips)-1){
						if(sum1!=3||sum2!=1){
							printf("ERR\n");
							return false;
						}
					}
					if((sum1>3||sum2>1)||(sum2==1&&ips[i]=='.')) {
						printf("ERR\n");
						return false;
					}
					bool aaaa=0;//가가가가가가가
					int k=i==strlen(ips)-1?i+1:i;
					for(;; k--) {
						//if(k-1==-1)break;
						//printf("%d %d %c %c\n",aaaa,k-1,ips[k-1],ips[k]);
						if((k-1==-1||ips[k-1]=='.'||ips[k-1]==':')&&ips[k]=='0'&&(ips[k+1]>='0'&&ips[k+1]<='9')) {
							printf("ERR\n");
							return false;
						}
						if(k-1==-1||ips[k-1]=='.'||ips[k-1]==':')break;
						aaaa=1;
					}
					//if(ips[i]==':'&&i==strlen(ips)-1)aaaa=0;
					if(ips[i]<='0'&&ips[i]>='9')aaaa=1; 
					if(aaaa==0) {
						printf("ERR\n");
						return false;
					}
					ip[sum++]=Ip;
					if(Ip>255&&i!=strlen(ips)-1) {
						printf("ERR\n");
						return false;
					} else if(Ip>65535&&i==strlen(ips)-1) {
						printf("ERR\n");
						return false;
					}
					Ip=0;
				}
			}
			return true;
		}
		bool operator ==(const Node &a)const {
			for(int i=0; i<5; i++) {
				if(ip[i]!=a.ip[i]) {
					return false;
				}
			}
			return true;
		}
	protected:
		int ip[6],sum;
		
} ans[2005];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		if(ans[i].in()==1) {
			int find=0;
			for(int k=1; k<i; k++) {
				if(ans[k].s_c>0&&ans[i]==ans[k])find=k;
			}
			if(find>0) {
				if(ans[i].s_c>0) {
					QwQ--;
					ans[i].s_c=-1;
					printf("FAIL\n");
					continue;
				}else{
					printf("%d\n",find);
				}
			}else{
				if(ans[i].s_c>0){
					printf("OK\n");
				}else{
					printf("FAIL\n");
				}
			}
		}
	}
	return 0;
}

