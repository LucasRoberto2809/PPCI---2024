#include <bits/stdc++.h>
using namespace std;

// 1h20min
// dificuldade em aceitar que chutar é aceitavel
// no caso eu só fiz o loop(k) e confiei que em algum
// momento no loop ele ia virar um ciclo ou ia falhar

int t, n, k, b[200005];
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n >> k;
        int pos = n, vis[200005]={0};
        bool ok = true;
        for(int i=1;i<=n;++i){
            cin >> b[i];
        }
        while(k--){
            if(b[pos] <= n){
                if(vis[pos])   break;
                vis[pos]=1;
                pos -= b[pos];
                if(pos <= 0) pos += n;
            }
            else{
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
