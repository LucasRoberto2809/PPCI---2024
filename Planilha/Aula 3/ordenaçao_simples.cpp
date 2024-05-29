#include <bits/stdc++.h>
using namespace std;
// multiset
// https://neps.academy/br/exercise/176

multiset<int> ms;
multiset<int>::iterator it;
int n;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }
    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << ' ';
    }
    cout << '\n';
    return 0;
}
