#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int n_i = 0, k_j = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            n_i += i * 100;
            k_j += j;
        }
    }
    ans = n_i + k_j;
    cout << ans << endl;
}