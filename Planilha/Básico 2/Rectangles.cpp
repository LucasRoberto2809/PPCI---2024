#include <bits/stdc++.h>
using namespace std;

long long pow(int b){
    long long r = 1;
    for(int i=0; i< b; ++i) r *= 2;
    return r-1;
}

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int a[55][55], b;
    long long resp=0;
    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
            cin >> a[i][j];
    for(int i=0; i<n; ++i){
        b=0;
        for(int j=0; j<m; ++j)  b+=a[i][j];
        resp+= pow(b) + pow(m-b);
    }
    for(int i=0; i<m; ++i){
        b=0;
        for(int j=0; j<n; ++j)  b+=a[j][i];
        resp+= pow(b) + pow(n-b);
    }
    cout << resp-n*m << '\n';

    return 0;
}
