// problema: 
// https://codeforces.com/contest/230/problem/A

// links relevantes:
// multiset: https://en.cppreference.com/w/cpp/container/multiset

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// precisamos apenas saber em qual ordem podemos derrotar todos os dragões
// utilizando multiset teremos em ordem crescente a força dos dragrões
// iterando nosso multiset verificamos a condição strength(s) > strength_dragon

int main(){
    ios::sync_with_stdio(false);
    multiset<pair<int,int>> ms;
    int s, n, a, b;
    cin >> s >> n;
    for(int i=0; i<n; ++i){
        cin >> a >> b;
        ms.insert({a,b});
    }
    bool resp = true;
    for(auto it = ms.begin(); it!=ms.end(); it++){
        if(s>it->first)   s+= it->second;
        else    resp=false;
    }
    cout << (resp ? "YES\n" : "NO\n");

    return 0;
}
