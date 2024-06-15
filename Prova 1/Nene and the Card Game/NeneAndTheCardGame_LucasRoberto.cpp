// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/518879/problem/B

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// se ambos jogarem perfeitamente somente conseguirão pontuar com as proprias cartas duplicadas
// logo precisamos contar o numero de duplicatas

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, b;
        cin >> n;
        // vetor de contagem no qual cada indice representa um possivel valor de carta
        vector<int> a(n+1);
        int resp=0;
        for(int i=0; i<n; ++i){
            cin >> b;
            // caso valor do indice não seja zero
            if(a[b])   resp++;
            a[b]++;
        }
        cout << resp << '\n';
    }
    return 0;
}
