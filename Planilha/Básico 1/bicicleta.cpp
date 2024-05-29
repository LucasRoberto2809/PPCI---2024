#include <bits/stdc++.h>
using namespace std;

/* poligono angulo interno = 180*(n-2)
 * angulo interno lago = 90*(n-x) + 270*x
 * 90n-90x+270x = 180n-360
 * 180x = 90n-360
 * x = (n-4)/2 */

int n, a, b;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
    }
    cout << (n-4)/2 << "\n";

    return 0;
}
