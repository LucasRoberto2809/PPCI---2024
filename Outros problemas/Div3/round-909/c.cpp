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
        for(int i=0; i<n; i++)  cin >> a[i];
        int sum=0, resp=-1e18;
        for(int i=0; i<n; i++){
            if(i>0 and abs(a[i]%2) == abs(a[i-1]%2)) sum = 0;
            resp = max(resp,sum+=a[i]);
            //sum+=a[i];
            sum = max(sum,0);
        }
        cout << resp << '\n';
    }

    return 0;
}
