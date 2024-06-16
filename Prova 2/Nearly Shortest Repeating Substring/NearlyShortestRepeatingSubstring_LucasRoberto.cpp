// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/521748/problem/E

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// para cada i que n%i==0 vamos criar a string k de tamanho i e tentar montar a string c que tenha não mais que um caractere diferente de s
// o loop que verifica a string c tem a seguinte logica:
// vamos separar a string s em strings de tamanho i e verificamos se há mais de um caractere diferente

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // loop O(srqt(n))
        for(int i=1; i<=n; ++i){
            if(n%i==0){
                int mx=2;
                // loop O(n) (a complexidade total dos loops de j e k)
                // para cada caractere j vamos verificar os caracteres k
                // no qual k "pula" de i em i até k>=n
                for(int j=0; j<i; ++j){
                    for(int k=j+i; k<n; k+=i){
                        if(s[j]!=s[k])  mx--;
                    }
                }
                if(mx>0){
                    cout << i << '\n';
                    break;
                }
                mx=2;
                // repetimos o lógica anterior, mas agora iniciamos do final para o começo
                // é importante para casos que nosso caractere j=0 seja o diferente dos demais
                for(int j=n-i; j<n; ++j){
                    for(int k=j-i; k>=0; k-=i){
                        if(s[j]!=s[k])  mx--;
                    }
                }
                if(mx>0){
                    cout << i << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
