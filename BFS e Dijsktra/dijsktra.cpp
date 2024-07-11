// problema: 
// https://codeforces.com/problemset/problem/20/C

// links relevantes:

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define pii pair<int, int>

int n, m;
vector<pii> adj[100005];
bool vis[100005];
int dis[100005], path[100005];
vector<int> resp;
priority_queue<pii> pq;
// temos 2 opções de implementaçao usando priority queue:
// 1- priority_queue<pii, vector<pii>, greater<pii>> usando dis direto no algoritmo
// 2- priority_queue<pii> default e usar -dis no algoritmo

void dijsktra (int x){
    // crio vetores de distancia e caminho
    for(int i=0; i<n; ++i)  dis[i] = INF;
    dis[x] = 0;
    pq.push({0, x});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        if(vis[u])  continue;
        vis[u] = true;
        for(auto i = adj[u].begin(); i != adj[u].end(); i++){
            int v = i->first;
            int w = i->second;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                path[u] = v;
                pq.push({-dis[v], v});  // -dis[v] caso utilizemos priority queue default
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m;
    // crio lista de adjacencia
    for(int i=0; i<m; ++i){
        int a, b, w;
        cin >> a >> b >> w;
        a--; b--; // diminuo a e b em 1
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }
    dijsktra(0);
    if(dis[n-1] == INF) cout << "-1\n";
    else{
        int a = 0;
        while(a != n-1){
            resp.push_back(a+1);
            a = path[a];
        }
        resp.push_back(n);
        for(auto i : resp)  cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
