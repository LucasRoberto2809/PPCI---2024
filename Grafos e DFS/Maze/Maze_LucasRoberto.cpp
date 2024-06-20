// problema:
// https://codeforces.com/problemset/problem/377/A

// links relevantes:
// https://www.geeksforgeeks.org/depth-first-traversal-dfs-on-a-2d-array/

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// o problema traz uma dfs em uma matriz (2d dfs)
// vamos chamar de s o numero de vertices totais
// iremos utilizar a dfs para visitar s-k vertices
// depois só precisamos colocar 'X' nas posições que não foram visitadas

char v[500][500];
bool vis[500][500];
int n, m, k, s=0, x;

// valores de adjacencia 
// perceba que eles serão utilizados para criar as 4 posições de adjacencia, se a posição é (x,y) seriam: (x,y+1),(x+1,y),(x,y-1) e (x-1,y);
int dRow[] = {0, 1, 0, -1};
int dCol[] = {1, 0, -1, 0};

bool isValid(int row, int col){
    // confiro se row e col estao dentro do limite da matriz
    if(row<0 or col<0 or row>=n or col>=m)
        return false;
    // confiro se posição já visitada
    if(vis[row][col])
        return false;
    // se posição não é '.'
    if(v[row][col]!='.')
        return false;
    return true;
}

void dfs(int row, int col){
    // pilha para guardar os pares das posições
    stack<pair<int,int>> st;
    st.push({row,col});
    // loop até stack empty
    while(!st.empty()){
        // se já visitei x vertices
        if(x==0)    return;
        pair<int,int> p = st.top();
        st.pop();
        int row = p.first;
        int col = p.second;
        // se posição não é valida continuo o loop
        if(!isValid(row,col))   continue;
        // marco posição como visitada
        vis[row][col]=true;
        // contabilizo +1 vertice visitado
        x--;
        // push posições adjacentes
        for(int i=0; i<4; ++i){
            int adjx = row + dRow[i];
            int adjy = col + dCol[i];
            st.push({adjx,adjy});
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    // posição inicial da dfs
    int a, b;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> v[i][j];
            if(v[i][j]=='.'){
                a=i; b=j;
                s++;
            }
        }
    }
    // x é o numero de vertices que devem ser visitados
    x = s-k;
    dfs(a,b);
    // vamos criar a matriz final
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            // marcamos os vertices nao visitados como 'X'
            if(v[i][j]=='.' and !vis[i][j]) v[i][j] = 'X';
        }
    }
    // matriz resposta
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cout << v[i][j];
        }
        cout << '\n';
    }

    return 0;
}
