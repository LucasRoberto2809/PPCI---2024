// problema: 
// https://codeforces.com/group/Jd6zhlGJZg/contest/518879/problem/C

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// (expressão) ? (operação) : (operação);
// equivalente a if(); else();

int main(){
    ios::sync_with_stdio(false);
    int a1, a2, k1, k2, n, mn, mx;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    // vamos forçar que o time 1 seja o time que pode levar menos cartoes
    if(k1 > k2){
        swap(a1,a2);
        swap(k1,k2);
    }
    // minimo de cartoes
    // vamos deixar os jogadores de ambos os times com 1 unico cartao e o minimo será quantos cartoes sobrarem
    n > a1*(k1-1)+a2*(k2-1) ? mn = n-(a1*(k1-1)+a2*(k2-1)) : mn = 0;
    // maximo de cartoes
    // vamos expulsar todos os jogadores do time 1 e se sobrar cartoes vamos expulsar os jogadores do time 2
    n > a1*k1 ? mx = a1+((n-a1*k1)/k2) : mx = n/k1;
    // resposta
    cout << mn << ' ' << mx << '\n';

    return 0;
}
