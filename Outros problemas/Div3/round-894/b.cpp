#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, i=0;
        cin >> n;
        vector<int> b(n), a;
        for(int i=0; i<n; ++i) cin >> b[i];
        while(i < n){
            if(i>0 and b[i]<b[i-1]) a.push_back(b[i]);
            a.push_back(b[i]);
            i++;
        }
        cout << a.size() << '\n';
        for(int i=0; i<a.size(); ++i)
            cout << a[i] << ' ';
        cout << '\n';
        a.clear();
        b.clear();
    }

    return 0;
}
