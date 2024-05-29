#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; ++i)  cin >> a[i];
        sort(a.begin(),a.end());
        int p=a[((n+1)/2)-1], m=((n+1)/2)-1, c=0;
        while(p==a[m] and m<n){
            c++; m++;
        }
        cout << c << '\n';
    }

    return 0;
}
