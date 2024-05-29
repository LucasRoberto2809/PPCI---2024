#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int sum[100005], t;
    string s;
    cin >> s;
    sum[0]=0;
    for(int i=1; i<s.size(); ++i){
        if(s[i]==s[i-1])    sum[i]=sum[i-1]+1;
        else    sum[i]=sum[i-1]+0;
    }
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << sum[b-1] - sum[a-1] << '\n';
    }

    return 0;
}
