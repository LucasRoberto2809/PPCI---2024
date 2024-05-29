#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, a;
        cin >> n;
        char s[n];
        for(int i=0; i<n; ++i){
            cin >> a;
            s[i] = 'a'+a;
        }
        cout << s << '\n';
    }

    return 0;
}
