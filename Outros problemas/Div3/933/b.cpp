#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        bool b=false;
        for(int i=0; i<n; ++i)  cin >> a[i];
        for(int i=1; i<n-1; ++i){
            if(a[i-1]==0 and a[i]>=0 and a[i+1]>=0)   continue;
            else{
                a[i]-=a[i-1]*2;
                a[i+1]-=a[i-1];
                if(a[i]<0 or a[i+1]<0){
                    b=true;
                    break;
                }
                a[i-1]=0;
            }
        }
        if(a[n-2]!=0 or a[n-1]!=0)  b=true;
        cout << (b? "NO\n" : "YES\n");
    }

    return 0;
}
