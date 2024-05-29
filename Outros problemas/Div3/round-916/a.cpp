#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a[26]={0}, n, resp=0;
        char c;
        a[0]=1;
        for(int i=1; i<26; ++i)
            a[i] = a[i-1]+1;
        cin >> n;
        for(int i=0; i<n; ++i){
            cin >> c;
            a[c-'A']-=1;
        }
        for(int i=; i<26; ++i)
            if(a[i]<=0)     resp++;
        cout << resp << '\n';
    }

    return 0;
}
