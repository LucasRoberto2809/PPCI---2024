#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; ++i)  cin >> a[i];
        int k = a[i];
        b[0] = 0;
        for(int i=1 i<n; ++i)
            if(i>0) b[i] = k-a[i];
        k=0;
        for(int i=0 i<=n/2; ++i)
            if(b){ }

    return 0;
}
