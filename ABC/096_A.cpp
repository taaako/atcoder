#include <bits/stdc++.h>
using namespace std;

int main(){
    int month, date;
    cin >> month >> date;

    if (month <= date)
        cout << month << endl;
    else
        cout << month - 1 << endl;
}