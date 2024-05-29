#include <bits/stdc++.h>
using namespace std;
// encontramos primeiro gcd(a,m)
// o valor de x é todos os multiplos de gcd(a,m) no intervalo
// [a,a+m-1] - os multiplos de m do mesmo intervalo
// caso gcd(a,m) = 1, todos os numeros do intervalo [a,a+m-1] - os multiplos de m do intervalo.

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a, m;
        cin >> a >> m;
        int x = gcd(a,m), resp=0;
        //cout << ((a+m)/x) - ((a+m)/m) << '\n';
        cout << x << '\n';
        cout << gcd(3,20) << '\n';
        //cout << ((a+m)/x)-(a/x) << '\n';
        //cout << (a+m)/m << '\n';
        //cout << gcd(a,m) << '\n';
        //cout << gcd(8,12) << '\n';
    }

    return 0;
}
