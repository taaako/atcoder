#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    int ans = 0;
    ans = max({a[0], a[1], a[2]}) - min({a[0], a[1], a[2]});
    cout << ans << endl;
}