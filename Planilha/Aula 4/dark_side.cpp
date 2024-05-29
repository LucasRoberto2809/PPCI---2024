#include <bits/stdc++.h>
typedef long long int ll; 
using namespace std;
// n = 5*10e5
// algoritmo n*logn
// uso do upper_bound

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> sum(n); // array do valor total de pontos
    vector<ll> low_par(n); // array que será ordenado
    vector<ll> resp(n); // array resposta
    vector<ll> cond(n); //array de condicao
    for(int i=0; i<n; ++i){
        ll a, b, c;
        cin >> a >> b >> c;
        sum[i]=(a+b+c);
        low_par[i]=(a+b+c)-max({a,b,c})+2;
        // se ele derrota a si mesmo
        if(max({a,b,c})>=2)  cond[i]=1;
    }
    // sort low_par
    sort(low_par.begin(), low_par.end());
    for(int i=0; i<n; ++i){
        auto it = upper_bound(low_par.begin(), low_par.end(),sum[i]);
        resp[i] = n-distance(it,low_par.end())-cond[i];
    }
    for(int i=0; i<n; ++i){
        cout << resp[i] << ' ';
    }
    cout << '\n';

    return 0;
}
