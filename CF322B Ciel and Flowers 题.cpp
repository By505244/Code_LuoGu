#include<bits/stdc++.h>//万能头
using namespace std;
inline int read(){//快读
	int ans=0,flag=1;
	char ch=getchar();
	while((ch>'9'||ch<'0')&&ch!='-') ch=getchar();
	if(ch=='-') flag=-1,ch=getchar();
	while(ch>='0'&&ch<='9'){
		ans=(ans<<1)+(ans<<3)+(ch^'0');
		ch=getchar();
	}
	return ans*flag;
}
int a,b,c,ans;//分别代表读入数据，ans表示答案。
int main(){
	a=read(),b=read(),c=read();//读入
	ans=a/3+b/3+c/3+min(a%3,min(b%3,c%3));//最初始的（不减）
	if(a>=1&&b>=1&&c>=1) ans=max(ans,(a-1)/3+(b-1)/3+(c-1)/3+1+min((a+2)%3,min((b+2)%3,(c+2)%3)));//如果可以减（减完不是负数）的话就枚举另一种情况，这里因为是对3取模，所以减1和加2没有区别
	if(a>=2&&b>=2&&c>=2) ans=max(ans,(a-2)/3+(b-2)/3+(c-2)/3+2+min((a+1)%3,min((b+1)%3,(c+1)%3)));//同上，枚举减2
	printf("%d\n",ans);//输出答案
	return 0;
}
