#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,m=0;
        cin >> n;
        char c[3];
        bool b=false;
        for(int i=0; i<26; ++i){
            if(b)   break;
            for(int j=0; j<26; ++j){
                if(b)   break;
                for(int k=0; k<26; ++k){
                    if(b)   break;
                    if(i+j+k+3==n){
                        c[0]= 'a'+i;
                        c[1]= 'a'+j;
                        c[2]= 'a'+k;
                        cout << c[0]<<c[1]<<c[2]<<'\n';
                        b=true;
                    }
                }
            }
        }
    }

    return 0;
}
