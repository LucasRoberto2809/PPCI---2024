#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(2*n), v1, v2;
        int m[n+5]={0}, k1=2*k, k2=2*k;
        for(int i=0; i<2*n; ++i)    cin >> a[i];
        for(int i=0; i<n; ++i) m[a[i]]++;
        for(int i=n; i<2*n; ++i) m[a[i]]--;
        for(int i=0, j=0; i<n; ++i){
            if(j==2*k)  break;
            if(!m[a[i]]){
                v1.push_back(a[i]);
                v2.push_back(a[i]);
                j++; k1--; k2--;
            }
        }
        if(k1%2!=0){
            k1++;k2++;
            v1.pop_back();
            v2.pop_back();
        }
        for(int i=1; i<=n; ++i){
            if(m[i]==2 and k1>0){
                v1.push_back(i);
                v1.push_back(i);
                k1-=2;
            }
            if(m[i]==-2 and k2>0){
                v2.push_back(i);
                v2.push_back(i);
                k2-=2;
            }
        }
        for(int i=0; i<2*k; ++i)    cout << v1[i] << ' ';
        cout << '\n';
        for(int i=0; i<2*k; ++i)    cout << v2[i] << ' ';
        cout << '\n';
    }

    return 0;
}
