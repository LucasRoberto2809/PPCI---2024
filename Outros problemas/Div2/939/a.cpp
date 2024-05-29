#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int k, q;
        cin >> k >> q;
        int a[101], n[101];
        for(int i=0; i<k; ++i)  cin >> a[i];
        for(int i=0; i<q; ++i)  cin >> n[i];
        for(int i=0; i<q; ++i){
            int num = n[i];
            while(1){
                int mx=0;
                for(int j=0; j<k; ++j){
                    if(num < a[j])  break;
                    if(num >= a[j])  mx=j+1;
                }
                num-=mx;
                if(num < a[0])  break;
            }
            cout << num << ' ';
        }
        cout << '\n';
    }

    return 0;
}
