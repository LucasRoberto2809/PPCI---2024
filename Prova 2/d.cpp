#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<int> a(n);
        long long int sum=0;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            sum+=a[i]%1000000007;
        }
        long long int mx=INT_MIN, cr=0;
        for(int i=0; i<n; ++i){
            cr+=a[i]%1000000007;
            mx=max(mx,cr);
            cr=max(cr,0ll);
        }
        mx=max(mx,0ll);
        if(mx!=0){
            long long int num=1;
            for(int i=0; i<k; ++i) num=(num*2)%1000000007;
            sum+=(mx%1000000007)*((num-1)%1000000007);
        }
        while(sum<=0) sum+=1000000007;
        cout << sum%1000000007 << '\n';
    }

    return 0;
}
