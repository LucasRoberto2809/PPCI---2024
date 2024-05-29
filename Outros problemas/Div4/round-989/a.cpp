#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0]=='a' or s[1]=='b' or s[2]=='c')  cout << "YES\n";
        else    cout << "NO\n";
    }

    return 0;
}
