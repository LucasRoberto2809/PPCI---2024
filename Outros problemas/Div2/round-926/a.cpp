#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i=0; i<n; ++i)  cin >> a[i];
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=n-1; i>0; --i){
            sum+=a[i]-a[i-1];
        }
        cout << sum << '\n';
    }

    return 0;
}
