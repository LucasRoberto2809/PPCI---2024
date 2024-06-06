/// problema:
// https://codeforces.com/contest/1295/problem/D

// links relevantes:
// https://cp-algorithms.com/algebra/phi-function.html

// -------------------------------------------------------------------------- ///

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long a, m;
        cin >> a >> m;
        long long resp = m/gcd(a,m);
        for(long long x = 2; x*x <= m; x++){
            int flag=0;
            while(m%x == 0){
                flag++;
                m /= x;
            }
            if(flag)    resp -= resp/x;
        }
        if(m>1) resp -= resp/m;
        cout << resp << '\n';
    }

    return 0;
}
