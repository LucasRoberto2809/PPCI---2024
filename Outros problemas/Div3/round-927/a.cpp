#include <bits/stdc++.h>
using namespace std;
// 7 min

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char a[n];
        for(int i=0; i<n; ++i)  cin >> a[i];
        int c=0;
        for(int i=0; i<n; ++i){
            if(a[i]=='@')   c++;
            if(a[i]=='*'){
                if(a[i+1]=='*') break;
                else    continue;
            }
        }
        cout << c << '\n';
    }

    return 0;
}
