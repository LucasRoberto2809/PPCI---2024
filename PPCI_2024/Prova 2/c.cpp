#include <bits/stdc++.h>
using namespace std;
// 1h 07min
// tentei resolver outros antes 40 min

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; ++i) cin >> v[i];
        int resp = v[0];
        for(int i=1; i<n; ++i) resp =(resp/v[i]+1)*v[i];
        cout << resp << '\n';
    }

    return 0;
}
