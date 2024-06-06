// problema:
// https://neps.academy/br/exercise/282
//
// links relevantes:

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    // vamos fatorar n:
    // n = p1*p2*p3...
    // onde p são os numeros primos que compõe a fatoração de n
    // precisamos apenas verificar se n possui dois primos distintos ou se n possui um primo exponenciado, ou seja:
    // n = p1*p2
    // n = p1^x

    // algoritmo de fatoração O(sqrt(n))
    vector<long long> factors;
    for(long long x = 2; x*x <= n; x++){
        while(n%x == 0){
            factors.push_back(x);
            n /= x;
        }
    }
    if(n>1) factors.push_back(n);

    cout << (factors.size()>=2 ? "S\n" : "N\n");

    return 0;
}
