#include <bits/stdc++.h>
using namespace std;

int main(){
    char base;
    cin >> base;

    if (base == 'A')
        cout << 'T' << endl;
    else if (base == 'T')
        cout << 'A' << endl;
    else if (base == 'C')
        cout << 'G' << endl;
    else
        cout << 'C' << endl;
}