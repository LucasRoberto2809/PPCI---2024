#include <bits/stdc++.h>
using namespace std;

int t;
char v[8][8];
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        char c;
        string s = "";
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++){
                cin >> c;
                v[i][j] = c;
                if(c!='.')  s += c;
            }

        cout << s << '\n';
    }

    return 0;
}
