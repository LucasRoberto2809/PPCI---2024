// problema: 
// https://codeforces.com/problemset/problem/20/C

// links relevantes:

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;
#define INF 2e6

// handbook: priority_queue
for (int i = 1; i <= n; i++) distance[i] = INF;
distance[x] = 0;
q.push({0,x});
while (!q.empty()) {
    int a = q.top().second; q.pop();
    if (processed[a]) continue;
    processed[a] = true;
    for (auto u : adj[a]) {
        int b = u.first, w = u.second;
        if (distance[a]+w < distance[b]) {
            distance[b] = distance[a]+w;
            q.push({-distance[b],b});
        }
    }
}

vector<vector<pair<int, int>>> adj;
vector<int> dis, resp;
vector<bool> vis;
set<pair<int,int>, int> q;

void dijsktra (){
}

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    // crio vetores de tamanho n
    adj = vector<vector<pair<int, int>>>(n);
    dis = vector<int>(n, INF);
    vis = vector<bool>(n);
    // crio lista de adjacencia
    for(int i=0; i<m; ++i){
        int a, b, w;
        cin >> a >> b >> w;
        // diminuo a e b em 1
        a--; b--;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    return 0;
}
