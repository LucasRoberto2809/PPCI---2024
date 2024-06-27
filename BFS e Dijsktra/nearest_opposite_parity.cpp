// problema: 
// https://codeforces.com/problemset/problem/1272/E

// links relevantes:
// https://www.geeksforgeeks.org/minimum-number-of-jumps-to-obtain-an-element-of-opposite-parity/

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;
#define INF 3e5

// A ideia do problema é rodar uma bfs partindo de uma paridade(impar ou par) e contabilizar a distancia até encontrar uma paridade oposta

// Vamos pensar no nosso grafo de forma a guardar as adjacencias ao contrario, ou seja, se no indice i eu possuo um valor de a[i] e cairei nas adjacencias a[j] = a[i-a[i]] ou a[i+a[i]] guardaremos o inverso na lista de adjacencia. veja o exemplo:
// dada a entrada: 4 5 7 6 7 5 4 4 6 4
// a adjacencia de i=0 seria j=4: 0 -> 4 e a[4] = 7
// a adjacencia de i=1 seria j=6: 1 -> 6 e a[6] = 4
// ao contrario teriamos:
// adj[4] = 0, adj[6] = 1 e assim por diante
// é importante guardarmos ao contrario para calcularmos a distancia futuramente

// Alem da lista de adjacencia vamos guardar os indices i que possuem a[i] = impar em um vetor e os que possuem a[i] = par em outro, esses vetores serão utilizados na lógica da nossa bfs

// Para encontra a distancia de um indice par até um indice impar vamos começar a BFS(multi-source) a partir dos indices impares e sempre que encontrarmos um indice par vamos marcar a distancia como d[filho] = d[pai] + 1 (veja a implementação para melhor entendimento)

int n;
vector<vector<int>> adj;
// vetor v guarda array de entrada
vector<int> v, resp;
// vetores para guardar valores pares e impares
vector<int> impar, par;

void bfs(vector<int> paridade, vector<int> oposto){
    vector<int> d(n, INF);
    queue<int> q;
    // vamos colocar na fila todos os indices da paridade e a distancia deles como 0
    for(auto i : paridade){
        d[i] = 0;
        q.push(i);
    }
    // a fila possui todos os indices da paridade e iremos iterar por eles vendo a adjacencia que cada um deles possui
    // se tivermos um indice de paridade oposta (que ainda possua d = INF) vamos alterar a distancia para d = 1 e adiciona-lo na fila (para caso a conexão de outro indice passe por ele)
    // depois vamos iterar os indices de paridade oposta que foram adicionados na fila
    while(!q.empty()){
        int i = q.front();
        q.pop();
        for(auto j : adj[i]){
            // os adjacentes que são de paridade contraria
            if(d[j]==INF){
                // marco a distancia da adjacencia como d[nodo_pai]+1
                d[j] = d[i] + 1;
                // coloco o nodo_filho na fila
                q.push(j);
            }
        }
    }
    // para cada indice de paridade oposta vamos marcar sua distancia na resposta
    for(auto i : oposto){
        if(d[i] != INF) resp[i] = d[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    // declaro v com tamanho n
    v = vector<int>(n);
    // declaro adj como um vetor (de tamanho n) de vetores
    adj = vector<vector<int>> (n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
        // se for impar
        if(v[i] & 1)    impar.push_back(i);
        else    par.push_back(i);
    }
    // Crio lista de adjacencia com direções contrarias
    for(int i=0; i<n; ++i){
        // "salto" para posição r ou l
        int l = i - v[i];
        int r = i + v[i];
        // se posição esta entre 0 e n-1
        if(l>=0)    adj[l].push_back(i);
        if(r<n)     adj[r].push_back(i);
    }
    // inicio resp com tamanho n e elementos = -1
    resp = vector<int>(n, -1);
    // cria resposta de pares
    bfs(impar,par);
    // cria resposta de impares
    bfs(par, impar);
    for(auto i : resp)
        cout << i << ' ';
    cout << '\n';

    return 0;
}
