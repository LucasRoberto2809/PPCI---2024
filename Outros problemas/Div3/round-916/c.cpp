#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        int a[200005]={0}, b[200005]={0};
        cin >> n >> k;
        for(int i=0; i<n; ++i) cin >> a[i];
        for(int i=0; i<n; ++i) cin >> b[i];
        int sum=0, c=-1, resp=0;
        for(int i=0; i<n and i<k; i++){
            sum+=a[i];
            c = max(c, b[i]);
            resp = max(resp, sum+1*c*(k-i-1));
        }
        cout << resp << '\n';
    }

    return 0;
}
