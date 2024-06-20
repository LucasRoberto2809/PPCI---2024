// problema:
// https://codeforces.com/contest/1303/problem/C

// links relevantes:
// https://cp-algorithms.com/graph/depth-first-search.html

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// para senhas de 1 letra teremos resp = s + letras_faltantes
// em senhas com 2 ou mais letras teremos 2 letras com 1 adjacencia, caso contrário não será possivel formar o keyboard
// para comprovar isto vamos testar as entradas:
// abca -> keyboard: -abc?a- vemos que não há configuração que permita que a e c sejam adjacentes
// acbdca -> keyboard: -acb?d- vemos que não há configuração que permita que c tenha 3 adjacencias

// para formar o keyboard (resp) vamos começar pelas letras da senha s e depois preenche com as faltantes
// vamos iniciar uma dfs(s[0]) colocando as letras que visitarmos a esquerda de resp. E quando retornarmos a s[0] iremos colocar as proximas letras visitadas a direita

bool vis[26], flag;
vector<char> v[26];
string s, resp;

void dfs(char x){
    vis[x-'a'] = true;
    // coloco a letra a direita
    if(flag)   resp += x; 
    // coloco a letra a esquerda
    else    resp = x + resp; 
    // se adjacente não visitado
    for(int i=0; i<v[x-'a'].size(); ++i){
        if(!vis[v[x-'a'][i]-'a']) dfs(v[x-'a'][i]);
        // se retornei a s[0]
        if(x==s[0]) flag=true;
    }
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        vector<int> letters(26);
        // marco numero de letras utilizadas
        for(int i=0; i<s.size(); ++i){
            if(!letters[s[i]-'a']) letters[s[i]-'a']++;
        }
        // crio adjacencias de cada letra
        for(int i=0; i<s.size(); ++i){
            // coloco letra adjacente se posição da letra é valida e a letra já não foi colocada
            int ind = s[i]-'a';
            if(i+1<s.size() and find(v[ind].begin(),v[ind].end(), s[i+1])==v[ind].end())
                v[ind].push_back(s[i+1]);
            if(i-1>=0 and find(v[ind].begin(),v[ind].end(), s[i-1])==v[ind].end())
                v[ind].push_back(s[i-1]);
        }
        bool b = true;
        int one_adj=0;
        // confiro adjacencias
        for(int i=0; i<26; ++i){
            if(v[i].size()==1)  one_adj++;
            if(v[i].size()>2)  b = false;
        }
        // confiro condições de senha
        if(s.size()>1 and one_adj!=2) b = false;
        if(!b){
            cout << "NO\n";
        }
        else{
            resp = "";
            // flag usada para mudar adição da esquerda para direita
            flag = false;
            dfs(s[0]);
            // completo keyboard com letras faltantes
            for(int i=0; i<26; ++i)
                if(!letters[i]) resp += (char)((int)'a'+i);
            cout << "YES\n" << resp << '\n';
        }
        // limpo vis e v
        for(int i=0; i<26; ++i){
            vis[i] = false;
            v[i].clear();
        }
    }

    return 0;
}
