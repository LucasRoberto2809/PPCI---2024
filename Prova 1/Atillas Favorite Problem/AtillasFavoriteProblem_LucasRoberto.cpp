// problema:
// https://codeforces.com/group/Jd6zhlGJZg/contest/518879/problem/A

// -------------------------------------------------------------------------- //

#include <bits/stdc++.h>
using namespace std;

// precisamos verificar qual a maior letra que aparece na string s

int main(){
    ios::sync_with_stdio(false);
    int t;
	cin >> t;
	while(t--){
		int n, m=0;
		cin >> n;
		string s;
		cin >> s;
        // s[i] - 'a' é um inteiro com a distancia entre a letra da posição i e letra 'a'
		for(int i=0; i<n; i++){
            m = max(m, s[i]-'a'+1);
		}	
		cout << m << endl;
	}

    return 0;
}
