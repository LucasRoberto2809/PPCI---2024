#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long int a, b, m;
        cin >> a >> b >> m;
        cout << (a+m)/a + (b+m)/b << '\n';
    }

    return 0;
}
