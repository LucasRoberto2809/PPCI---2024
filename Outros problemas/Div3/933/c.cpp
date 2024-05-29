#include <bits/stdc++.h>
using namespace std;
// substring

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, resp=0;
        string s;
        cin >> n >> s;
        int pos=s.find("map", 0);
        while(pos!=string::npos) {
            resp++;
            pos=s.find("map",pos+1);
        }
        pos=s.find("pie", 0);
        while(pos!=string::npos){
            resp++;
            pos=s.find("pie",pos+1);
        }
        pos=s.find("mapie", 0);
        while(pos!=string::npos){
            resp--;
            pos=s.find("mapie",pos+1);
        }
        cout << resp << '\n';
    }


    return 0;
}
