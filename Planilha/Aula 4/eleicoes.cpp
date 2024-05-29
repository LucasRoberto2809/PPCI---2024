#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, a;
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; ++i){
        cin >> a;
        mp[a]++;
    }
    //for(auto i = mp.begin(); i!=mp.end(); ++i){
        //cout << i->first << ' ' << i->second << '\n';
    //}
    int mx = 0, resp = 0;
    for(auto i = mp.begin(); i!=mp.end(); ++i){
        if(mx < i->second){
            mx = i->second;
            resp = i->first;
        }
    }
    cout << resp << '\n';


    return 0;
}
