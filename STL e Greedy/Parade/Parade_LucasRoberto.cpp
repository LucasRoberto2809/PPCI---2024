// problema:
// https://www.codechef.com/HCKATHON/problems/PAR

// links relevantes:
// stack: https://en.cppreference.com/w/cpp/container/stack

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// esta solução apresenta um codigo em C++ para o problema, apesar de não submetido acredito que a lógica esta correta.
//
// variaveis:
// at = atual caminhao 
// v[0] é primeiro caminhao da ordem atual
// stack representa a "side street"
//
// para solucionar vamos usar a seguinte logica:
// se v[0] == at retiramos do vector
// se v[0] != at usamos a stack
// se stack vazia colocamos v[0] no topo
// se o topo da stack != at, colocamos v[0] no topo
// senao retiramos topo
//
// repetimos a logica até ambos estarem vazios
// caso vector vazio e topo da stack != at não conseguimos organizar a ordem

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; ++i)  cin >> v[i];
        int at = 1;
        stack<int> st;
        bool resp = true;
        // loop para esvaziar vector e stack
        while(!v.empty() and !st.empty()){
            // se vetor vazio e topo da stack != de at
            if(v.empty() and st.top()!=at){
                resp = false;
                break;
            }
            // se v[0] != at verifico stack
                // se stack vazia empurro v[0] para stack
                // se stack.top() != at empurro v[0] para stack
                // senao retiro topo da stack e aumento at
            else if(at != v[0]){
                if(st.empty() or st.top() != at){
                    st.push(v[0]);
                    v.erase(v.begin());
                }
                else{
                    st.pop();
                    at++;
                }
            }
            // se v[0]==at retiro do vector
            else{
                //v.erase(find(v.begin(), v.end(), at));
                v.erase(v.begin());
                at++;
            }
        }
        cout << (resp ? "yes\n" : "no\n");
    }

    return 0;
}
