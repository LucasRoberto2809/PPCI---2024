#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    char c;
    int a[10]={0}, b;
    bool resp = true;
    cin >> b;
    for(int i=0; i<16; ++i){
        cin >> c;
        if (c != '.')   a[c-'0']+=1;
    }
    for(int i=0; i<10; ++i) 
        if (a[i] > 2*b) resp=false;
    cout << (resp ? "YES" : "NO");

    return 0;
}
