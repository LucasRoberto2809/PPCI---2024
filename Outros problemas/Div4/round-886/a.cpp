#include <bits/stdc++.h>
using namespace std;

int t, a, b, c;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a+b>=10 or b+c >=10 or a+c>=10)  cout << "YES\n";
        else cout << "NO\n";
        }

    return 0;
}
