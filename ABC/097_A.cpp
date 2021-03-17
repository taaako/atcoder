#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, dis;
    cin >> a >> b >> c >> dis;

    if (abs(a-c) <= dis || abs(a-b) <= dis && abs(b-c) <= dis)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}