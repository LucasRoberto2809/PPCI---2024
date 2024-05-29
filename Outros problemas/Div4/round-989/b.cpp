#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, resp=1;
        vector <int> v;
        cin >> n;
        for(int i=0; i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        resp*=v[0]+1;
        for(int i=1; i<n;i++){
            resp*=v[i];
        }
        cout << resp << '\n';
        v.clear();
    }

    return 0;
}
