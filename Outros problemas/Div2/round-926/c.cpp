#include <bits/stdc++.h>
using namespace std;

 
long long int d, m[105][35];
void fn(int x, int k){
    if(x==100)  return;
    d += (d/k + d%k);
    cout << d << ' ';
    m[x][k] = d;
    fn(x+1,k);
    return;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    d=1;
    fn(0,2);
    cout << '\n';
    cout << '\n';
    for(int j=0; j<=100; ++j)
        cout << m[j][2] << ' ';
        cout << '\n';
    for(int j=2; j<=30; ++j){
        d=1;
        //fn(1,j);
    }
    cin >> t;
    while(t--){
        int k, x, a;
        cin >> k >> x >> a;
        cout << ((k>x and a>k+1) or a>m[x][k] ? "YES\n" : "NO\n");
    }


    return 0;
}
