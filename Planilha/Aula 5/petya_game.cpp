#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// vamos criar todos os numeros primos e suas exponeciações que sejam menores do que n
// n >= p1^(ai) ou p2^(ai) ou ... ou pm^(ai)
// no qual ai são todos os expoentes naturais possíveis

vector<int> v; // vetor de primos
vector<int> resp; // vetor resposta

// função que verifica a exponenciação dos primos menores que n
// inicialmente x=1, y= primo
void fn(int x, int y, int n){
    if(x*y > n)   return;
    else{
        resp.push_back(x*y);
        fn(x*y, y, n);
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    // criamos nosso vetor de primos
    v.push_back(2);
    for(int i=2; i<=n; ++i){
        bool b = true;
        for(int j=0; j<v.size(); ++j){
            if(i%v[j]==0)   b=false;
        }
        if(b)   v.push_back(i);
    }

    // neste loop iteramos nosso vetor de primos verificando p^(ai) <= n
    for(int i=0; i<v.size(); ++i){
        fn(1, v[i], n);
    }
    cout << resp.size() << '\n';
    for(int i=0; i<resp.size(); ++i)
        cout << resp[i] << ' ';
    cout << '\n';

    return 0;
}
