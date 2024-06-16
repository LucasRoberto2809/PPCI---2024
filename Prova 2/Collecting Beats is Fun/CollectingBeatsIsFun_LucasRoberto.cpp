// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/521748/problem/A

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    char c;
    int a[10]={0}, b;
    bool resp = true;
    cin >> b;
    // vamos contar quantas vezes cada numero aparece na tabela
    for(int i=0; i<16; ++i){
        cin >> c;
        if (c != '.')   a[c-'0']+=1;
    }
    // depois precisamos verificar se todos os numeros aparecem menos de 2*k
    for(int i=0; i<10; ++i) 
        if (a[i] > 2*b) resp=false;
    cout << (resp ? "YES" : "NO");

    return 0;
}
