#include <bits/stdc++.h>
using namespace std;

int main(){
    int nonfat, fat;
    cin >> nonfat >> fat;

    int solid = nonfat + fat;
    if (solid >= 15 && fat >= 8)
        cout << "1" << endl;
    else if (solid >= 10 && fat >= 3)
        cout << "2" << endl;
    else if (solid >= 3)
        cout << "3" << endl;
    else
        cout << "4" << endl;
}