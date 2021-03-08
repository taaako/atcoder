#include <bits/stdc++.h>
using namespace std;

int main(){
    int cat, mix, x;
    cin >> cat >> mix >> x;

    int sum = cat + mix;
    if (cat <= x && sum >= x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}