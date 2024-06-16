// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/521748/problem/C

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// os sinais vão acontecer no multiplo de ai mais proximo do ano atual +1
// vamos analisar a entrada:
// 6
// 3 2 4 5 9 18
// iniciamos com o primeiro sinal em 3
// o segundo sinal deve ocorrer em ((3/2)+1)*2 = 4 (divisao arredondada para baixo)
// o terceiro sinal deve ocorrer em ((4/4)+1)*4 = 8
// o quarto sinal deve ocorrer em ((8/5)+1)*5 = 10
// o quinto sinal deve ocorrer em ((10/9)+1)*9 = 18
// o sexto sinal deve ocorrer em ((18/18)+1)*18 = 36

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        // vetor com os anos dos sinais
        for(int i=0; i<n; ++i) cin >> v[i];
        int resp = v[0];
        for(int i=1; i<n; ++i) resp =((resp/v[i])+1)*v[i];
        cout << resp << '\n';
    }

    return 0;
}
