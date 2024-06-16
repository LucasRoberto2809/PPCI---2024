// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/521748/problem/D

// links relevantes:
// kadane's algorithm: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007

// vamos encontrar o subarray com maior valor de soma e repetir a operação k vezes neste subarray

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<int> a(n);
        long long int sum=0;
        // vamos iniciar calculando o valor inicial da soma lembrando de tirar o mod MAX
        for(int i=0; i<n; ++i){
            cin >> a[i];
            sum+=a[i]%MAX;
        }
        // vamos encontrar o subarray com maior valor de soma (kadane's algorithm)
        long long int mx=INT_MIN, cr=0;
        for(int i=0; i<n; ++i){
            cr+=a[i]%MAX;
            mx=max(mx,cr);
            cr=max(cr,0ll);
        }
        // caso a soma seja negativa
        mx=max(mx,0ll);
        // realizar a operação de somar esse subarray k vezes
        if(mx!=0){
            long long int num=1;
            for(int i=0; i<k; ++i) num=(num*2)%MAX;
            // adiciono a soma atual, lembrando de retirar o valor do subarray inicialmente
            sum+=(mx%MAX)*((num-1)%MAX);
        }
        // se soma negativa precisamos torna-la positiva antes de tirar o módulo (evitar erros)
        while(sum<=0) sum+=MAX;
        cout << sum%MAX << '\n';
    }

    return 0;
}
