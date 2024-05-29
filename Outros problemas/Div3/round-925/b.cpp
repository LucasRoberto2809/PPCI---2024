#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, sum=0;
        cin >> n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin >> a[i];
            sum+=a[i];
        }
        bool b = true;
        int r = 0;
        for(int i=0; i<n; ++i){
            if(a[i]<sum/n){
                if(a[i]+r < sum/n){
                    b=false;
                    break;
                }
                else    r-=sum/n - a[i];
            }
            if(a[i]>sum/n)  r+=a[i]-sum/n;
        }
        cout<< (b ? "YES\n" : "NO\n");
    }

    return 0;
}
