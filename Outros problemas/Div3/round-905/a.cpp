#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int x[5],t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        x[0]=1;
        for(int i=1; i<5;i++){
            x[i] = (s[i-1]-'0');
        }
        int resp=0;
        for(int i=1; i<5;i++){
            if(x[i]==0) x[i]=10;
            if(x[i]-x[i-1] < 0) resp += x[i-1]-x[i];
            else resp+=x[i]-x[i-1];
            resp++;
        }
        cout << resp << '\n';
    }
    return 0;
}
