#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int resp=0;
        char c;
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                cin >> c;
                if(c=='X'){
                    if(i<=5 and j<=5){
                        resp+= min(i,j);
                        //cout << i << ' ' << j << ' ' << min(i,j) << endl;
                    }
                    if(i<=5 and j>5){
                        resp+= (11-j);
                        //cout << i << ' ' << j << ' ' << 11-j << endl;
                    }
                    if(i>5 and j<=5){
                        resp+= (11-i);
                        //cout << i << ' ' << j << ' ' << 11-i << endl;
                    }
                    if(i>5 and j>5){
                        resp+= (11-max(i,j));
                        //cout << i << ' ' << j << ' ' << 11-max(i,j) << endl;
                    }
                }
            }
        }
        cout << "resp: " << resp << '\n';
    }

    return 0;
}
