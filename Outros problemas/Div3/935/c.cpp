#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char a[n+1];
        int m[n+2] = {0}, sum=0;
        for(int i=1; i<=n; ++i){
            cin >> a[i];
            if(a[i]=='1')   sum+=1;
        }
        int z[n+1], o[n+1], cur=0;
        for(int i=0; i<n; ++i){
            if(a[i]=='0')   cur++;
            if(sum-cur)
        }
    }

    return 0;
}
