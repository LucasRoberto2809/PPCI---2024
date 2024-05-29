#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> k;
        m=n;
        int a[n]={0};
        for(int i=0; i<n; ++i){
            if(k>=0){
                a[i] = n-k; k--; m--;
            }
            else a[i] = m--;
        }
        for(int i=0; i<n; ++i)
            cout << a[i] << ' ';
        cout << '\n';
    }

    return 0;
}
