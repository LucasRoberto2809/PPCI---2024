#include <bits/stdc++.h>
using namespace std;
// utiliza pair

int main(){
    ios::sync_with_stdio(false);
    int d, sum, a, b;
    cin >> d >> sum;
    vector<pair<int,int>> v(d);
    vector<int> resp(d);
    int sum_mn=0, sum_mx=0;
    for(int i=0; i<d; ++i){
        cin >> a >> b;
        v[i]={a,b};
        sum_mn+=a;
        sum_mx+=b;
    }
    if(sum_mn > sum or sum_mx < sum)    cout << "NO\n";
    else{
        for(int i=0; i<d; ++i){
            resp[i]=v[i].first;
            sum-=resp[i];
        }
        int i=0;
        while(1){
            if(sum-(v[i].second - v[i].first) <= 0){
                resp[i]+=sum;
                break;
            }
            sum-= (v[i].second - v[i].first);
            resp[i] = v[i].second;
            i++;
        }
        cout << "YES\n";
        for(int i=0; i<d; ++i){
            cout << resp[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
