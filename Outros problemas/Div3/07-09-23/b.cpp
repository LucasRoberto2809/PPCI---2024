#include <bits/stdc++.h>
using namespace std;

int t, n, a, b;
vector<pair<int, int>> p;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        // loop para criar vetor de pairs
        for(int i=0; i<n; i++){
            cin >> a >> b;
            pair <int, int> c(a,b);
            p.push_back(c);
        }
        sort(p.begin(), p.end());   // ordena vetor
        int c = p[0].first;
        int d = (p[0].second-1)/2;
        int e = d;
        for(int i=1; i<n; i++){
            // caso nao dê tempo de chegar na prox sala, saia do loop
            if(p[i].first - p[i-1].first > e)   break; 
            e -= p[i].first - p[i-1].first; // tempo até chegar na proxima sala
            if((p[i].second-1)/2 < e){ // caso armadilha da sala force k a diminuir
                d = ((p[i].second-1)/2) + (p[i].first - p[0].first);
                e = ((p[i].second-1)/2);
            }
        }
        cout << c+d << "\n";
        p.clear();
    }

    return 0;
}

