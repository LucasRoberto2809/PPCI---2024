#include <bits/stdc++.h>
using namespace std;

int t, a, b, c;

int main(){
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a == 1){
            cout << "-1\n";
            continue;
        }
        bool d = true;
        c = ((b-a)/2);
        for(int i=0; i<(b-a)/2; i++){
            cout << "gcd(" << c-i << "," << c+i << ")" << endl;
            if(__gcd(c-i,c+i)!=1){
                cout << c-i << " " << c+i <<"\n";
                d=false;
            break;
            }
        }
        if(d)   cout << "-1\n";
    }

    return 0;
}
