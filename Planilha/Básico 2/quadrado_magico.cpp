#include <bits/stdc++.h>
using namespace std;

int n, m[10][10]={0}, sum=0;
bool b=false;
int sumR=0, sumC=0, sumDr=0, sumDl=0;
int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
    for (int i=0; i<n; i++)     sum += m[0][i];
    for (int i=0; i<n; i++){
        sumDr += m[i][i];
        sumDl += m[n-i-1][i];
    }
    if(sumDr!=sum || sumDl!=sum) b = true;
    for (int i=0; i<n; i++){
        sumR = 0;
        sumC = 0;
        for (int j=0; j<n; j++){
            sumR += m[i][j];
            sumC += m[j][i];
        }
        if(sumR!=sum || sumC!=sum)  b = true;
    }
    cout << (b ? -1 : sum) << "\n";

    return 0;
}
