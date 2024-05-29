#include <bits/stdc++.h>
using namespace std;

double t, a, b, c, resp=0;

int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        
        cout << ceil((((a+b)/2)-min(a,b))/c)<< endl;
    }

    return 0;
}
