#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int multi = max({a, b, c});
    for (int i = 0; i < k; i++)
        multi = multi * 2;

    int ans = (a + b + c + multi) - max({a, b, c});
    cout << ans << endl;
}