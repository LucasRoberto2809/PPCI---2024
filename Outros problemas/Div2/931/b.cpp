#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, resp=2e10;
        cin >> n;
        for(int i1=0; i1<=2; ++i1)
        for(int i3=0; i3<=1; ++i3)
        for(int i6=0; i6<=4; ++i6)
        for(int i10=0; i10<=2; ++i10){
            int sum = i1 + i3*3 + i6*6 + i10*10;
            if(sum <= n and (n-sum)%15==0)
                resp = min(resp, i1+i3+i6+i10+(n-sum)/15);
        }
        cout << resp << '\n';
    }

    return 0;
}
