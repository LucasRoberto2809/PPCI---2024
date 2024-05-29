#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum=0;
        for(int i=1; i<=n; ++i) sum += (2*i-1)*i;
        cout << sum << ' ' << 2*n-1 << '\n';
        for(int i=n; i>0; --i){
            cout << "1 " << i << ' ';
            for(int j=1; j<=n; ++j) cout << j << ' ';
            cout << '\n';
            if(i == n)    continue;
            cout << "2 " << i << ' ';
            for(int j=1; j<=n; ++j) cout << j << ' ';
            cout << '\n';
        }
    }
    return 0;
}
