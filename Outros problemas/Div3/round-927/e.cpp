#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map <char, int> m;
        char c;
        cin >> c;
        for(int i=0; i<2*n; ++i){
            string s;
            cin >> s;
            if(s[1]==c)  m[c]++;
            else if(!m[s[1]]) ++m[s[1]];
            else{
            }

        }
        cout << '\n';
    }

    return 0;
}
