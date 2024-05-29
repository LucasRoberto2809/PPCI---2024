#include <bits/stdc++.h>
using namespace std;
// soma de colunas e linhas

int n, m[1001][1001], resp=0;
vector <pair<int,int>> v;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sumX=0;
        int sumY=0;
        for(int j=0;j<n;j++){
            sumX+=m[i][j];
            sumY+=m[j][i];
        }
        v.push_back({sumX, sumY});
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i].first + v[j].second - 2*m[i][j] > resp)
                resp = v[i].first + v[j].second - 2*m[i][j];
        }
    }
    cout << resp << endl;


    return 0;
}
