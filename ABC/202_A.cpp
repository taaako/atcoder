#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;
    ans = abs(a - 7) + abs(b - 7) + abs(c - 7);
    cout << ans << endl;
}