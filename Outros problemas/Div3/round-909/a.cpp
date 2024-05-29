#include <bits/stdc++.h>
using namespace std;

int t,n;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        if((n-1)%3==0 or (n+1)%3==0)    cout << "First\n";
        else    cout << "Second\n";
    }
    return 0;
}
