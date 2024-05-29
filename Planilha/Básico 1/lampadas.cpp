#include <bits/stdc++.h>
using namespace std;

int t, a=0, b=0;
int main(){
    cin >> t;
    while(t--){
        int c;
        cin >> c;
        if(c==1){
            a = (a+1)%2;

        }
        else{
            a = (a+1)%2;
            b = (b+1)%2;
        }
    }
    cout << a << endl;
    cout << b << endl;

    return 0;
}
