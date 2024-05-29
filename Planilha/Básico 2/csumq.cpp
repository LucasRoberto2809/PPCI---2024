#include <bits/stdc++.h>
using namespace std;

int n, a, b;
vector <int> v;
int main(){
    cin >> n;
    v.push_back(0);
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(v[i]+a);
    }
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a!=b)    cout << v[b+1]-v[a] << "\n";
        else    cout << v[b+1]-v[b] <<"\n";
    }

    return 0;
}
