#include<bits/stdc++.h>//����ͷ
using namespace std;
inline int read(){//���
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
int a,b,c,ans;//�ֱ����������ݣ�ans��ʾ�𰸡�
int main(){
	a=read(),b=read(),c=read();//����
	ans=a/3+b/3+c/3+min(a%3,min(b%3,c%3));//���ʼ�ģ�������
	if(a>=1&&b>=1&&c>=1) ans=max(ans,(a-1)/3+(b-1)/3+(c-1)/3+1+min((a+2)%3,min((b+2)%3,(c+2)%3)));//������Լ������겻�Ǹ������Ļ���ö����һ�������������Ϊ�Ƕ�3ȡģ�����Լ�1�ͼ�2û������
	if(a>=2&&b>=2&&c>=2) ans=max(ans,(a-2)/3+(b-2)/3+(c-2)/3+2+min((a+1)%3,min((b+1)%3,(c+1)%3)));//ͬ�ϣ�ö�ټ�2
	printf("%d\n",ans);//�����
	return 0;
}
