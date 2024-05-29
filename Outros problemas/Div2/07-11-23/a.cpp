#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n >> s;
        cout << s[n-1] << '\n';
    }

    return 0;
}
