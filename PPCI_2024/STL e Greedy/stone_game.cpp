// problema:
// https:/https://codeforces.com/contest/1191/problem/D

// links relevantes:
// map: https://en.cppreference.com/w/cpp/container/map

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// vamos definir o numero maximo de jogadas em que cada pilha teria no vetor final:
// 0 1 2 3 4 ...
// logo para resolver o problema precisamos somente tornar nosso vetor atual neste vetor final e contar quantas rodadas foram necessarias para chegar ao nosso vetor final

// primeiro marcamos o numero de pedras em cada pilha em um indice do vetor e verificamos se a primeira jogada é possivel 
// caso haja mais de uma pilha com numeros iguais de pedras verificando as condições do vetor:
// 1 2 1 1 2 3 - por exemplo, não é possivel
// senao vamos calcular a distancia entre os indices e o numero atual do vetor final

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        mp[a]++;
    }
    // busco pilhas iguais
    int two=0, three=0, index=-1;
    for(auto i=mp.begin(); i!=mp.end(); ++i){
        if(i->second==2){
            index=i->first;
            two++;
        }
        if(i->second>=3)    three++;
    }
    int plays = 0;
    bool dist = true;
    if(two>=2 or three>=1){
        cout << "cslnb\n";
        dist = false;
    }
    // se houver duas pilhas iguais
    if(dist and index!=-1){
        // se indice anterior tiver uma pilha ou duas pilhas de 0 pedras
        if(mp[index-1]!=0 or index == 0){
            cout << "cslnb\n";
            dist = false;
        }
        // senao faço primeira jogada
        else{
            mp[index]--;
            mp[index-1]++;
            plays++;
        }
    }
    if(dist){
        vector<int> indices;
        for(auto i=mp.begin(); i!=mp.end(); i++){
            if(i->second)   indices.push_back(i->first);
        }
        // distancia entre duas pilhas
        for(int i=0; i<indices.size(); ++i){
            if(indices[i]-i == 0)    continue;
            plays += indices[i]-i;
        }
        cout << (plays%2 ? "sjfnb\n" : "cslnb\n");
    }

    return 0;
}
