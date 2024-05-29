#include <bits/stdc++.h>
using namespace std;
// demorei pra resolver devido os iteradores

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        multiset <int> ms;
        multiset <int> quatro;
        int n, x, k;
        cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> x;
            if(k==4){
                if(x%2!=0)  quatro.insert(2 - x%2);
                else    quatro.insert(0);
            }
            if(x%k!=0)  ms.insert(k - x%k);
            else    ms.insert(0);
        }
        multiset <int>::iterator it1=ms.begin(), it2, it3;
        if(k==4){
            it2=quatro.begin(); it3=quatro.begin();it3++;
        }
        if(k==4 and (*it1 > *it2 + *it3)){
            cout << *it2+*it3 << '\n';
        }
        else    cout << *it1 << '\n';
        ms.clear();
        if(k==4)    quatro.clear();
    }

    return 0;
}
