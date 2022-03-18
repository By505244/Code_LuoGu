#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

const int N = 2010, M = 1010;
const int MOD = 1e8;
int n, m;
int f[N][M], a[N];

inline int read()
{
    char ch = getchar(); int x = 0, flag = 0;
    while (!isdigit(ch)){ if (ch == '-') flag = 1; ch = getchar(); }
    while (isdigit(ch)){ x = x * 10 + ch - '0'; ch = getchar(); }
    return flag ? -x : x;
}

int main()
{
	freopen("P2946_2 (1).in","r",stdin); 
    n = read(), m = read();
    for (int i = 1; i <= n; i ++) f[i][a[i] = read()%m] = 1;
    for (int i = 1; i <= n; i ++)
        for (int j = 0; j < m; j ++)
            f[i][j] = (f[i][j]+f[i-1][j]+f[i-1][((j-a[i])%m+m)%m])%MOD;
    printf("%d\n", f[n][0]);
    return 0;
}
