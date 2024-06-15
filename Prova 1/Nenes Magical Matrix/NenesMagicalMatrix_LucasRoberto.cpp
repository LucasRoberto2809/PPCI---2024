// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/518879/problem/E

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// o desafio deste problema é descobrir qual o formato da matriz
// 1 2 3 4 ... n
// 2 2 3 4 ... n
// 3 3 3 4 ... n
// 4 4 4 4 ... n
// . . . . ... n
// . . . . ... n
// . . . . ... n
// n n n n ... n

// para formar essa matriz temos que aplicar a permutação [1 n] de forma alternada entre linha e coluna (ou vice versa) e também poderiamos pular a primeira operação e no final fariamos 2*n-1 operações

// vamos demonstrar como o algoritmo irá funcionar para n=3:
// 0 0 0
// 0 0 0
// 0 0 0
// operação linha 3
// 0 0 0
// 0 0 0
// 1 2 3
// pule operação da coluna 3
// 0 0 0
// 0 0 0
// 1 2 3
// operação linha 2
// 0 0 0
// 1 2 3
// 1 2 3
// operação coluna 2
// 0 1 0
// 1 2 3
// 1 3 3
// operação linha 1
// 1 2 3
// 1 2 3
// 1 3 3
// operação coluna 1
// 1 2 3
// 2 2 3
// 3 3 3

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum=0;
        // cada numero de [1 n] aparecerá 2n-1 vezes, logo cada numero contribui (2n-1)*num para a soma
        for(int i=1; i<=n; ++i) sum += (2*i-1)*i;
        // soma e numero de operações
        cout << sum << ' ' << 2*n-1 << '\n';
        // descrição das operações
        for(int i=n; i>0; --i){
            // aplicamos permutação na linha i
            cout << "1 " << i << ' ';
            for(int j=1; j<=n; ++j) cout << j << ' ';
            cout << '\n';
            // pulamos operação na ultima coluna
            if(i == n)    continue;
            // aplicamos permutação na coluna i
            cout << "2 " << i << ' ';
            for(int j=1; j<=n; ++j) cout << j << ' ';
            cout << '\n';
        }
    }
    return 0;
}
