#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << x << endl;
    else if (x != 2 && y != 2)
        cout << '2' << endl;
    else if (x != 0 && y != 0)
        cout << '0' << endl;
    else
        cout << '1' << endl;
}