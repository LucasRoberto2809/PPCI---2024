#include <bits/stdc++.h>
using namespace std;

int v[200005];
int fn(int a){
    int r=0;
    while(a){
        r += a%10;
        a /= 10;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    for(int i=1; i<=200000; ++i)
        v[i] = v[i-1] + fn(i);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << v[n] << '\n';
    }

    return 0;
}
