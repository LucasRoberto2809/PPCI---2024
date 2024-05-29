#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k;
        vector <int> v(n);
        for(int i=0; i<n; ++i) cin >> v[i];
        sort(v.begin(),v.end());
        //for(int i=0; i<n; ++i) cout << v[i] << ' ';
        //cout << '\n';
        int j=1, c=0;
        for(int i=1; i<n; ++i){
            if(v[i]-v[i-1] > k){
                c = max(c,j);
                j=1;
            }
            else    j++;
        }
        c=max(c,j);
        cout << n-c << '\n';
    }

    return 0;
}
