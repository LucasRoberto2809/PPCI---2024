#include <bits/stdc++.h>
using namespace std;
// https://www.spoj.com/problems/BSEARCH1/
// tentei utilizar lower_bound primeiro
// dps tive problemas por nao usar scanf e printf

int n, k, x;
vector <int> v;
vector <int>::iterator it;
int main(){
    ios::sync_with_stdio(false);
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        v.push_back(x);
    }
    for(int i=0; i<k; i++){
        scanf("%d", &x);
        int r = n, l = -1;
        while(r-l>1){
            int m = (r+l)/2;
            if(x <= v[m]){
                r = m;
            }
            else{
                l = m;
            }
        }
        v[r]==x? printf("%d\n", r): printf("-1\n");
    }
    return 0;
}
