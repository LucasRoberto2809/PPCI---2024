// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/518879/problem/D

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// como os swap's são feitos em ordem teremos:
// swap(2) -> 2 1 ...
// o 1 ficará na posição 2 do vetor e poderemos mover o 1 novamente no swap(x) em que x seja multiplo de 2
// logo precisamos verificar qual o maior mutiplo de 2 que seja menor ou igual a n

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, x=1;
        cin >> n;
        // maior multiplo de 2 que seja menor ou igual que n
        while(x*2<=n){
            x*=2;
        }
        cout << x << '\n';
    }

    return 0;
}
