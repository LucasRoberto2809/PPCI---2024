// problema: 
// https://codeforces.com/gym/102215/problem/J

// links relevantes:
// upper_bound: https://en.cppreference.com/w/cpp/algorithm/upper_bound
// distance: https://en.cppreference.com/w/cpp/iterator/distance

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
typedef long long int ll; 
using namespace std;

// algoritmo deve ser n*logn
// uso do upper_bound
// utilizado o long long int pois a,b,c = [0,10e9]

// lógica do problema:
// primeiro criamos dois vetores: "sum" e "low parameters"
    // sum irá guardar as somas dos atribuitos de cada jedi
    // low_par guarda quantos pontos são necessários para derrotá-lo
// o vetor de condição guarda se um jedi pode derrotar a si mesmo ao tornar-se o dark_side
// ordenamos o vetor low_par para aplicar "busca binária" nele

// apos isto apenas iteramos cada indice de sum verificando quantos jedis o atual pode derrotar
// essa verificação deve ser feita em O(logn) para isso usamos upper_bound e distance

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
        // recebo em it o indice de low_par que consigo derrotar com minha sum[i] em logn
        auto it = upper_bound(low_par.begin(), low_par.end(),sum[i]);
        // distance é uma função que calcula a distancia em dois iteradores
        // atente-se ao vetor de condição 
        resp[i] = n-distance(it,low_par.end())-cond[i];
    }
    for(int i=0; i<n; ++i){
        cout << resp[i] << ' ';
    }
    cout << '\n';

    return 0;
}
