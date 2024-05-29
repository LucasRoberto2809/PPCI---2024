#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, a, sum=0, resp=5;
        cin >> n;
        vector <int> v(n);
        for(int i=0; i<n; ++i){
            cin >> v[i];
            sum+=v[i];
        }
        if(sum%3==0)    resp=0;
        for(int i=0; i<n; ++i)
            if((sum-v[i])%3==0) resp = min(resp,1);
        cout << min(resp, 3-sum%3) << '\n';
    }

    return 0;
}
