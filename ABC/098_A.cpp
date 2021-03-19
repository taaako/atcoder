#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    int sub = a - b;
    int pro = a * b;
    int ansb = max(sum, sub);
    int ans = max(ansb, pro);

    cout << ans << endl;
}