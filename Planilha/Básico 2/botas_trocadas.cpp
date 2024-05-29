#include <bits/stdc++.h>
using namespace std;
// utilizando pilha

int n, resp=0, a;
stack <int> sl[32], sr[32];
char s;
int main(){
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> a >> s;
        if(s=='E'){
            if(sr[a-30].empty()) sl[a-30].push(1);
            else{ sr[a-30].pop(); resp++; }
        }
        else{
            if(sl[a-30].empty())    sr[a-30].push(1);
            else{ sl[a-30].pop(); resp++; }
        }
    }
    cout << resp << endl;

    return 0;
}
