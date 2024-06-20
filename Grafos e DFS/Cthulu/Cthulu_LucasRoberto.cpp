// problema:
// https://codeforces.com/problemset/problem/104/C

// links relevantes:
// https://cp-algorithms.com/graph/depth-first-search.html

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// podemos definir o cthulu como um grafo não direcionado com um unico ciclo e todos os vertices devem estar conectados

int n, m;
vector<int> v[105];
bool visited[105]; 

void dfs(int s){
    visited[s] = true;
    for(auto u : v[s]){
        if(!visited[u])  dfs(u);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m;
    int x, y;
    for(int i=0; i<m; ++i){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    // usamos uma dfs para acessar os vertices e depois verificamos vetor de visitados
    dfs(1);
    bool b = true;
    // verificamos se todos os vertices foram visitados
    for(int i=1; i<=n; ++i){
        if(!visited[i]){
            b = false;
            break;
        }
    }
    // grafo(n,m) no qual n=m garante um único ciclo
    cout << (m==n and b ? "FHTAGN!\n" : "NO\n");

    return 0;
}
