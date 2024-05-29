#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char m[2][n];
        for(int i=0; i<2; ++i)
            for(int j=0; j<n; ++j)  cin >> m[i][j];
        //for(int i=0; i<2; ++i){
            //for(int j=0; j<n; ++j)  cout << m[i][j];
            //cout << '\n';
        //}
        int a=0,p=n-1;
        char v[n+2];
        v[0]=m[0][0];
        for(int j=1; j<n; ++j){
            if(j==n-1) v[n]=m[1][n-1];
            if(!a){
                if(m[a][j]>m[a+1][j-1]){
                    a++;
                    v[j]=m[a][j-1];
                    p=j-1;
                    //cout << m[a][j-1];
                }
                else v[j]=m[a][j];
            }
            else{
                    v[j]=m[a][j];
            }
        }
        cout << p << '\n';
        //v[n+1]=m[1][n-1];
        for(int j=0; j<n+1; ++j) cout << v[j];
        cout << '\n';
        //cout << r << '\n';
    }

    return 0;
}
