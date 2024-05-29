#include <bits/stdc++.h> using namespace std;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        char v[10][10];
        bool b = true;
        int mnj=11, mni=11, mxj=-1, mxi=-1;
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j){
                cin >> v[i][j];
                if(v[i][j]=='1'){
                    mni = min(mni, i);
                    mnj = min(mnj, j);
                    mxi = max(mxi, i);
                    mxj = max(mxj, j);
                }
            }
        for(int i=mni; i<=mxi; ++i)
            for(int j=mnj; j<=mxj; ++j)
                if(v[i][j]!='1')    b = false;

        cout << (b ? "SQUARE\n" : "TRIANGLE\n");
    }

    return 0;
}
