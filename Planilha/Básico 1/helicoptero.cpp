#include <bits/stdc++.h>
using namespace std;

int h,p,f,c, d;
int main(){
    cin >> h >> p >> f >> d;
    c=f;
    while(1){
        if(c==p){    cout << "N\n"; break;}
        if(c==h){    cout << "S\n"; break;}
        c+= d;
        if(c>15)    c=0;
        if(c<0)     c=15;
    }

    return 0;
}
