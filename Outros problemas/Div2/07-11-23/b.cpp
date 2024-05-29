#include <bits/stdc++.h>
using namespace std;

// 30 min

int t, n;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        int v[101]={0}, a[101], b[101], x=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a[i];
            v[a[i]]++;
            if(v[a[i]]==2 and x==0){
                b[i]=2;
                x++;
            }
            else if(v[a[i]]==2 and x==1){
                b[i]=3;
                x++;
            }
            else    b[i]=1;
        }
        if(x==2){
            for(int i=0; i<n; i++){
                cout << b[i] << ' ';
            }
            cout << '\n';
        }
        else    cout << "-1\n";
    }

    return 0;
}
