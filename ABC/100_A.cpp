#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if (a < 9 && b < 9 && a + b <= 16)
        cout << "Yay!" << endl;
    else
        cout << ":(" << endl;
}