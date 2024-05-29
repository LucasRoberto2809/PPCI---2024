#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=0; i<n; ++i){
            int b;
            cin >> b;
            if(a[b])   a[b]--;
            a[b]++;
        }
        int resp=0;
        for(int i=1; i<=n; ++i) if(!a[i])   resp++;
        cout << resp << '\n';
    }
    return 0;
}
