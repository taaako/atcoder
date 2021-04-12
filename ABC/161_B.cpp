#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        // 割り算は良くない
        if (a[i] * 4 * m >= sum)
            count++;
    }
    if (count >= m)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}