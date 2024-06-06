#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    long long resp=1, a=1, b=1;
    // sequencia: 1 1 2 3 5 8 13 21 34 55 89 ...
    // fb(0) = fb(1) = 1
    // fb(n) = fb(n-1) + fb(n-2)
    for(int i=2; i<=n; ++i){
        resp = a+b;
        a = b;
        b = resp;
    }
    cout << resp << '\n';

    return 0;
}
