#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v(s1.size());
    int sum1=0, sum2=0; // marca o numero de b's de cada string
    for(int i=0; i<s1.size(); ++i){
        if(s1[i]!=s2[i])    v[i]++;
        sum1+=s1[i]-'a';
        sum2+=s2[i]-'a';
    }
    // se num total de b's impar 
    if((sum1+sum2)%2!=0)    cout << "-1\n";
    else{
    }
    cout << sum1 << ' ' << sum2 << '\n';
    //cout << s1 << '\n' << s2 << '\n';

    return 0;
}
