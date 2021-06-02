#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    cin >> a >> b >> t;

    int ans = 0;
    ans = floor((t + 0.5) / a) * b;

    cout << ans << endl;
}