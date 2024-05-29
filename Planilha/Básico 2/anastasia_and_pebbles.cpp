#include <bits/stdc++.h>
using namespace std;

// lembrar de não usar ceil e floor
// https://codeforces.com/problemset/problem/789/A

int n;
double k, resp=0;
int main(){
    cin >> n >> k;
    for(int i=0; i<n; ++i){
        double x;
        cin >> x;
        resp += ceil(x/k);
    }
    cout << (int)ceil(resp/2) << '\n';
    return 0;
}
