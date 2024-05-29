#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a=0, b=0;
        for(int i=0; i<5; ++i){
            if(s[i]=='A')   a++;
            else    b++;
        }
        cout << (a>b ? "A\n" : "B\n");
    }

    return 0;
}
