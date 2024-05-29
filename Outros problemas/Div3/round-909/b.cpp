#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t, n;

int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        ll resp = -1;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=1; i <= n; i++){
            if(n%i==0){
                ll mx=-1e18, mn=1e18;
                for(int j=0; j<n; j+=i){
                    ll temp=0;
                    for(int k=j; k<j+i; k++)    temp += a[k];
                    mx = max(mx,temp);
                    mn = min(mn,temp);
                }
                resp = max(resp, mx-mn);
            }
        }
        cout << resp << '\n';
    }

    return 0;
}
