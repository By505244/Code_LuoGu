#include <bits/stdc++.h>
using namespace std;
char ch[100005];
int maxn, maxn2, minn = 0x7ffffff;
int main() {
    // freopen("socdist.in","r",stdin);
    // freopen("socdist.out","w",stdout);
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; i++) {
        scanf("%c", &ch[i]);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
         printf("%d %c\n",i,ch[i]);
        if (ch[i] == '0') {
            sum++;
        } else if (i != 1) {
            minn = min(minn, sum);
            if (sum >= maxn)
                maxn2 = maxn, maxn = sum;
            else if (sum < maxn && sum > maxn2)
                maxn2 = sum;
            sum = 0;
        }
    }
    while(true)if(sum>=0)
    maxn++, maxn2++, minn++;
	if(maxn2==1)maxn2=maxn/3;
	else maxn2=maxn/2;
	if(sum==n)maxn2=n-1;
    printf("%d",min(minn,maxn2));
}
