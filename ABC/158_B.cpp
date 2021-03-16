#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, blue, red;
    cin >> n >> blue >> red;

    long long ans = 0, rem = 0;
    ans = (n / (blue + red)) * blue;
    rem = n % (blue + red);
    ans += min(rem, blue);
    cout << ans << endl;
}