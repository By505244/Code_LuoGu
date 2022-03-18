#include <iostream>
#include <algorithm>
using namespace std;


const int N = 15;
int n;
int ans = 0;
bool col[N],d[2*N-1],ud[2*N-1];
int p[N];
void dfs(int u ){
    if(u == n){
        ans++;
        if(ans <=3){
            for(int j = 0; j <n;j++){
                cout << p[j] << " ";
            }
            cout << endl;
        }
        return ;
    }
    for(int i = 1; i<=n ; i++){
        if(!col[i]&&!d[u+i]&&!ud[u-i+n]){
            p[u]  = i;
            col[i] = d[u+i] = ud[u-i+n] = true;
            dfs(u+1);
            col[i] = d[u+i] = ud[u-i+n] = false;
        }
    }
}
int main(){
    cin >> n;
    dfs(0);
    cout << ans ;
    return 0;
}
