#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, sum=0, mn=1e18, x;
        cin >> n;
        for(int i=0; i<n; ++i){
            cin >> x;
            if(mn > x)  mn=x;
            sum+=x;
        }
        if(mn < 0)
            sum-(n-1)*mn > sum ? sum=sum-(n-1)*mn : sum=sum;
        cout << sum;
        cout << '\n';
    }

    return 0;
}
