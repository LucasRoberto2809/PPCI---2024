#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, m, k, resp=0;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i=0; i<n; ++i)  cin >> a[i];
        for(int i=0; i<m; ++i)  cin >> b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
            if(a[i]+b[j]<=k)    resp++;
        cout << resp << '\n';

    }

    return 0;
}
