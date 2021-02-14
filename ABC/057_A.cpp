#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    if (sum > 23)
        sum -= 24;
    cout << sum << endl;
}