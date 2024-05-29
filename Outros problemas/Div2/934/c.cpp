#include <bits/stdc++.h>
using namespace std;
// corner case do vetor de 0

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int b[n]={0}, mx=2000005;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            b[a[i]]++;
        }
        bool f=false;
        sort(a.begin(), a.end());
        for(int i=0; i<n; ++i){
            if(b[i]==0) mx = min(mx,i);
            if(b[i]==1){
                if(f) mx = min(mx, i);
                else    f=true;
            }
        }
        if(f and mx==2000005)   mx=1;
        cout << mx << '\n';
    }


    return 0;
}
