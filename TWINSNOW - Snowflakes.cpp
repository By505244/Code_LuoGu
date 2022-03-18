//#pragma GCC optimize(1)
#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
inline unsigned int read() {
	unsigned int x=0;
	char ch=getchar();
	while(ch<'0'||ch>'9') {
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x;
}
int head[150005],Next[150005],tot=0;
long long snow[150005][15];
bool te(int k,int j) {
	for(int i=1; i<=6; i++)
		if(snow[k][i]!=snow[j][i]) {
			//printf("%d %d",snow[k][i],snow[j][i]);
			return false;
		}
	return true;
}
bool yes(int x,int nows) {
	for(int i=head[x]; i; i=Next[i]) {
		//cout<<1;
		if(te(nows,i))return true;
	}
}
void add_(int sum) {
	Next[++tot]=head[sum],head[sum]=tot;
}
int main() {
	//freopen("1.in","r",stdin);
	int n;
	cin>>n;
	int sum=0,mod=99991;
	for(int i=1; i<=n; i++) {
		unsigned long long int sum=0,qwq=1;
		for(int i1=1; i1<=6; i1++) {
			snow[i][i1]=read();
			sum=(sum+snow[i][i1])%mod;
			qwq=(long long)qwq*snow[i][i1]%mod;
		}
		int abab=(sum+qwq)%mod;
		int nows=i;
		/*********************************/
		long long snows[15];
		for(int i=1; i<=6; i++)snows[i]=snow[nows][i];
		for(int i=7; i<=12; i++)snows[i]=snow[nows][i-6];
		int j=2,k,i=1;
		while(j<=6&&i<=6) {
			for(k=0; k<6&&snows[i+k]==snows[j+k]; k++);
			if(snows[j+k]>snows[i+k]) {
				j=j+k+1;
				if(i==j)j++;
			} else {
				i=i+k+1;
				if(i==j)i++;
			}
		}
		int ans=min(i,j);
		int snow_[20];
		for(int ii=1; ii<=6; ii++)snow_[7-ii]=snow[nows][ii];
		for(int ii=7; ii<=12; ii++)snow_[19-ii]=snow[nows][ii-6];
		i=1,j=2,k=0;
		while(j<=6&&i<=6) {
			for(k=0; k<6&&snow_[i+k]==snow_[j+k]; k++);
			if(snow_[j+k]>snow_[i+k]) {
				j=j+k+1;
				if(i==j)j++;
			} else {
				i=i+k+1;
				if(i==j)i++;
			}
		}
		int sums=0;
		int aa=min(i,j);
		bool flag;
		for(int i=0; i<6; i++) {
			if(snow_[aa+i]>snows[ans+i]) {
				flag=1;
				break;
			} else if(snow_[aa+i]<snows[ans+i]) {
				flag=0;
				break;
			}
		}
		if(flag==1) {
			for(int i=ans; i<ans+6; i++) {
				snow[nows][i-ans+1]=snows[i];
				///	printf("%d ",snows[i]);
			}
		} else {
			for(int i=aa; i<aa+6; i++) {
				snow[nows][i-aa+1]=snow_[i];
				///	printf("%d ",snow_[i]);
			}
		}
		/**********************************************************/
		if(yes(abab,i)) {
			//double qaq=clock();
			printf("Twin snowflakes found.");
			return 0;
		}
		//printf("\n%d\n ",abab);
		add_(abab);
	}
	printf("No two snowflakes are alike.");
}

