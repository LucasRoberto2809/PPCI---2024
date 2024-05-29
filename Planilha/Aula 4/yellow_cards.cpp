#include <bits/stdc++.h>
using namespace std;
// forçar variavel ao inves de usar condiçoes

int main(){
    ios::sync_with_stdio(false);
    double a1, a2, k1, k2, n, mn, mx;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    if(k1 > k2){
        double aux = a1; a1=a2, a2=aux;
        aux = k1; k1=k2, k2=aux;
    }
    if(n > a1*(k1-1)+a2*(k2-1))
        mn = n - (a1*(k1-1)+a2*(k2-1));
    else    mn = 0;
    if(n > a1*k1)
        mx = a1 + floor((n-a1*k1)/k2);
    else    mx = floor(n/k1);
    cout << (int)mn << ' ' << (int)mx << '\n';

    return 0;
}
