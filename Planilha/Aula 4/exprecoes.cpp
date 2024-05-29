#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        stack<char> st;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); ++i){
            if((s[i] == '(') or (s[i] == '[') or (s[i] == '{'))
                st.push(s[i]);
            else{
                if(st.empty()){
                    st.push(s[i]);
                    break;
                }
                char aux = st.top();
                st.pop();
                if( (aux == '(' and s[i] != ')') or
                    (aux == '[' and s[i] != ']') or
                    (aux == '{' and s[i] != '}')){
                    st.push(s[i]);
                    break;
                }
            }
        }
        cout << (st.empty() ? "S\n" : "N\n");
    }

    return 0;
}
