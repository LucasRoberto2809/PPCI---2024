#include <bits/stdc++.h>
using namespace std;

int t, n, ai, bi;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){

        cin >> n;
        int a = 11, b = 0, resp;
        for(int i=0; i<n; i++){
            cin >> ai >> bi;
            if(ai < a and bi > b){
                b = bi;
                resp = i+1;
            }
        }
        cout << resp << '\n';
    }

    return 0;
}
