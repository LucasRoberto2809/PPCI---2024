#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(b%3+c<3 and b%3!=0)   cout << "-1\n";
        else    cout << a+b/3+((c+b%3+2)/3) << '\n';
    }

    return 0;
}
