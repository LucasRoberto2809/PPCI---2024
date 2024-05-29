#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, r=0, b;
        cin >> n;
        map <int, int> a;
        for(int i=0; i<n; ++i){
            cin >> b;
            if(!a[b]){
                r++;
                ++a[((1<<31) - 1)^b];
            }
            else    --a[b];
        }
        cout << r << '\n';
    }

    return 0;
}
