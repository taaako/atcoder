#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    if (k % 2 == 0)
        cout << pow(k / 2, 2) << endl;
    else
        cout << (k / 2) * (k / 2 + 1) << endl;
}