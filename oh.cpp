#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int main(){
	char a=getchar();
	int sum=0;
	while(a<='z'&&a>='a'){
		printf("%c",a);
		if(a=='o'){
			for(int i=0;i<=sum;i++)printf("h");
			sum++;
		}
		a=getchar();
	}
	return 0;
}

