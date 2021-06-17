#include <bits/stdc++.h>
using namespace std;

int main(){
    int age, price;
    cin >> age >> price;

    if (age >= 13)
        cout << price << endl;
    else if (age <= 5)
        cout << "0" << endl;
    else
        cout << price / 2 << endl;
}