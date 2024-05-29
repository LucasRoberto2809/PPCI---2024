#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, mx=0, mn=0;
        cin >> n;
        int a[n];
        bool b1=false, b2=false;
        for(int i=0; i<n; ++i) cin >> a[i];
        for(int i=0; i<n; ++i){
            if(b1 and b2)   break;
            if(!b1 and a[i]==a[0]) mn++;
            else b1=true;
            if(!b2 and a[n-1-i]==a[n-1]) mx++;
            else   b2=true;
        }
        cout << mx << ' ' << mn << ' ';
        if(a[n-1]==a[0]){
            if(mx==mn and mn==n) cout << "0\n";
            else    cout << n-mx-mn << '\n';
        }
        else{
            if(mx > mn)   cout << n-mx << '\n';
            else cout << n-mn << '\n';
        }
    }

    return 0;
}
