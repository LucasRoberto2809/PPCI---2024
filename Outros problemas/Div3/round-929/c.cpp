#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    long long int m[105][1010] = {0};
    cin >> t;
    for(int i=1; i<=100; ++i){
        m[i][0]=1;
        for(int j=1; j<=20; ++j){
            m[i][j]=i*m[i][j-1];
        }
    }
    while(t--){
        int a, b, l, k=0;
        cin >> a >> b >> l;
        set <long long int> v;
        for(int i=0; m[a][i]<=l; ++i)
            for(int j=0; m[a][i]*m[b][j]<=l; ++j)
                if(l%(m[a][i]*m[b][j])==0){
                    v.insert(l/(m[a][i]*m[b][j]));
                }
        cout << v.size() << '\n';
    }

    return 0;
}
