#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k>=n-1)  cout << "1\n";
        else    cout << n << '\n';
    }

    return 0;
}
