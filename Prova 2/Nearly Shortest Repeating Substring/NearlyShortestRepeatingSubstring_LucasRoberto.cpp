#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=1; i<=n; ++i){
            if(n%i==0){
                int mx=2;
                for(int j=0; j<i; ++j){
                    for(int k=j+i; k<n; k+=i){
                        if(s[j]!=s[k])  mx--;
                    }
                }
                if(mx>0){
                    cout << i << '\n';
                    break;
                }
                mx=2;
                for(int j=n-i; j<n; ++j){
                    for(int k=j-i; k>=0; k-=i){
                        if(s[j]!=s[k])  mx--;
                    }
                }
                if(mx>0){
                    cout << i << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
