#include <bits/stdc++.h>
using namespace std;
// PD
int m0[1000][1000]={0}, m1[1000][1000]={0};

int main(){
    ios::sync_with_stdio(false);
    for(int i=2; i<=1000; ++i){
        for(int j=1; j<i-1; ++j){
            m0[i][j] = (i+j)%n;
            m1[i][j] = n-(i-j);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n, m, x;
        cin >> n >> m >> x;
        char c[m];
        int r[m];
        for(int i=0; i<m; ++i) cin >> r[i] >> c[i];
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
            }
        }
    }

    return 0;
}
