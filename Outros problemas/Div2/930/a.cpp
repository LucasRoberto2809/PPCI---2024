#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, x=1;
        cin >> n;
        while(x*2<=n){
            x*=2;
        }
        cout << x << '\n';
    }

    return 0;
}
