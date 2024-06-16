// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/521748/problem/B

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// como podemos excluir quantos digitos quisermos vamos utilizar da seguinte logica:
// vamos encontrar dois numeros primos que sejam o inverso dos digitos um do outro
// 2 3 5 7 11 13 17 19 23 29 31 37 41 ...
// encontramos que o 13 e o 31 são o inverso um do outro
// agora só precisamos verificar qual dos digitos aparece primeiro no nosso numero

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        char c[9];
        for(int i=0; i<9; ++i) cin >>c[i];
        for(int i=0; i<9; ++i){
            if(c[i]-'0'==1){
                cout << "13\n";
                break;
            }
            if(c[i]-'0'==3){
                cout << "31\n";
                break;
            }
        }
    }

    return 0;
}
