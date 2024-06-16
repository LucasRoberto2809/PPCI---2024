// problema:
// https://www.spoj.com/problems/LASTDIG/

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long resp=1, a, b;
        cin >> a >> b;
        // considero apenas o ultimo digito
        a %=10;
        // exponenciação binária algoritmo O(log n)
        while(b>0){
            // verifico se o bit menos significante de b é 1
            if(b & 1) resp = (resp * a)%10;
            // equivalente: b /= 2
            // atribuo b igual a si mesmo por 1 bit shift para a direita
            b >>= 1;
            a = (a*a)%10;
        }
        // printo apenas o ultimo digito
        if(a==0)    cout << "0\n";
        else        cout << resp << '\n';
    }

    return 0;
}
