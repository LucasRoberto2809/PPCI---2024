#include <bits/stdc++.h>
using namespace std;
// 20min

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, mn=11, mx=-1;
        cin >> n;
        char a[10];
        for(int i=0; i<n; ++i)  cin >> a[i];
        for(int i=0; i<n; ++i)
            if(a[i]=='B'){
                mx = max(mx, i);
                mn = min(mn, i);
            }
        cout << (mn==11? 0 : mx-mn+1) << '\n';
    }

    return 0;
}
