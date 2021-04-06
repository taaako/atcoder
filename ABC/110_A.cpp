#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[3];
    cin >> n[0] >> n[1] >> n[2];

    sort(n, n+3);
    int ans = n[2]*10 + n[1] + n[0];

    cout << ans << endl;
}