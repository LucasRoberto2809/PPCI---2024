#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    ios::sync_with_stdio(false);
    int n, m, k, x, y;
    cin >> n >> m >> k;
    vector<lli> a(n), l(m), r(m), d(m);
    lli b[m]={0}, temp[m+1]={0}, resp[n+1]={0};
    for(int i=0; i<n; ++i)    cin >> a[i];
    for(int i=0; i<m; ++i) cin >> l[i] >> r[i] >> d[i];
    for(int i=0; i<k; ++i){
        cin >> x >> y; x--; y--;
        temp[x]++; temp[y+1]--;
    }
    for(int i=1; i<m; ++i)  temp[i]+=temp[i-1];
    for(int i=0; i<m; ++i){
        resp[l[i]-1] += d[i]*temp[i];
        resp[r[i]] -= d[i]*temp[i];
    }
    for(int i=1; i<n; ++i)  resp[i]+=resp[i-1];
    for(int i=0; i<n; ++i)  cout << a[i]+resp[i] << ' ';
    cout << '\n';

    return 0;
}
