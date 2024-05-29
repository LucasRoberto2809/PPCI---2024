#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, a, sum=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            sum+=abs(a);
        }
        cout << sum << '\n';
    }

    return 0;
}
