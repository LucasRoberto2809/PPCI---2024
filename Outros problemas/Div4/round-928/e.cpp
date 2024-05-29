#include <bits/stdc++.h>
using namespace std;
typedef long double ll;

ll n, k, a, b;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        a=1, b=0;
        while(1){
           if(b+ceil(n/2) >= k)    break;
           b += ceil(n/2);
           n -= ceil(n/2);
           a*=2;
        }
        cout << (int)((2*(k-b)-1)*a) << '\n';
    }

    return 0;
}
