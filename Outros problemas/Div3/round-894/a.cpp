#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){

        int n, m, k=0;
        char a[21][21];
        cin >> n >> m;
        for(int i=0; i<n;++i){
            for(int j=0; j<m;++j){
                cin >> a[i][j];
            }
        }
        for(int i=0; i<m;++i){
            for(int j=0; j<n;++j){
                if(a[j][i]=='v' and k==0){
                    k++;
                    break;
                }
                if(a[j][i]=='i' and k==1){
                    k++;
                    break;
                }
                if(a[j][i]=='k' and k==2){
                    k++;
                    break;
                }
                if(a[j][i]=='a' and k==3){
                    k++;
                    break;
                }
            }
        }
        cout << (k==4 ? "YES\n" : "NO\n");
    }

    return 0;
}
