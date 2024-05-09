#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        char c[9];
        for(int i=0; i<9; ++i) cin >>c[i];
        for(int i=0; i<9; ++i){
            if(c[i]-'0'==1){
                cout << "13\n";
                break;
            }
            if(c[i]-'0'==3){
                cout << "31\n";
                break;
            }
        }
    }

    return 0;
}
