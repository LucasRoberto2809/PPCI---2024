#include <bits/stdc++.h>
using namespace std;

int n, resp=0;
string s1, s2;
int main(){
    cin >> n;
    cin >> s1 >> s2;
    for(int i=0; i<n; i++)
        if(s1[i]==s2[i])    resp++;
    cout << resp << "\n";

    return 0;
}
