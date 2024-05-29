#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; ++i){
            string s;
            for(int j=0; j<n; ++j){
                if(i%2==j%2)    s+="##";
                else    s+="..";
            }
            cout << s << '\n';
            cout << s << '\n';
        }
    }

    return 0;
}
