#include <bits/stdc++.h>
using namespace std;

int main(){
    int date;
    cin >> date;

    if (date == 25)
        cout << "Christmas" << endl;
    else if (date == 24)
        cout << "Christmas Eve" << endl;
    else if (date == 23)
        cout << "Christmas Eve Eve" << endl;
    else
        cout << "Christmas Eve Eve Eve" << endl;
}