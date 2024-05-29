#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int j=0;
    char str[51];
    for(int i=0; i<s.size(); ++i){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            str[j]=s[i];
            j++;
        }
    }
    bool b = true;
    if(j%2==0){
        for(int i=0; i<j/2; ++i){
            if(str[i]==str[j-i-1]){
                b = true;
            }
            else{
                b = false;
                break;
            }
        }
    }
    else{
        for(int i=0; i<j/2+1; ++i){
            if(str[i]==str[j-i-1]){
                b = true;
            }
            else{
                b = false;
                break;
            }
        }
    }
    cout << (b ? "S\n" : "N\n");

    return 0;
}
