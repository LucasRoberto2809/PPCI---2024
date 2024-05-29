#include <bits/stdc++.h>
using namespace std;
// não façam recursivo !

int fb(int n){
    if(n==0)    return 1;
    if(n==1)    return 1;
    return fb(n-1)+fb(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fb(n) << "\n";

    return 0;
}
