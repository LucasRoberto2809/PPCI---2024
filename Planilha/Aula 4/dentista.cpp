#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n;
    map<int,int> mp;
    vector<int> v; // marca horarios atendidos
    // loop guardando menor tempo de cada horario de consulta
    for(int i=0; i<n; ++i){
        cin >> a >> b;
        if(!mp[a])  mp[a] = b;
        else    mp[a] = min(mp[a],b);
    }
    int at = INT_MIN;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        // se posso atender cliente
        if(at <= i->first){
            v.push_back(i->first);
            at = i->second;
        }
        // se horario de termino menor que atual
        // esta consulta sera atendido no lugar da outra
        else if(at > i->second){
            v.pop_back();
            v.push_back(i->first);
            at = i->second;
        }
    }
    cout << v.size() << '\n';

    return 0;
}
