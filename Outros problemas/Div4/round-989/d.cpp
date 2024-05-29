#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, k, resp=0, num=0;
        bool b;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            char c;
            cin >> c;
            if(num==0)  b=false;
            if(c=='B' and num==0){
                num=k;
                resp++;
                b=true;
            }
            if(b)    num--;
        }
        cout << resp << '\n';

    }

    return 0;
}
