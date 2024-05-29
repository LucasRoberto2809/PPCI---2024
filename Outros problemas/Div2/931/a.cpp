#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; ++i) cin >> a[i];
        int resp=0, b=0;
        sort(a.begin(), a.end());
        cout << 2*(a[n-1]-a[0])+2*(a[n-2]-a[1]) << '\n';
    }

    return 0;
}
