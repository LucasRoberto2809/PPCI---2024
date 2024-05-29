#include <bits/stdc++.h>
using namespace std;

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
