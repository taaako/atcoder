#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    if (n[0] == n[1] && n[1] == n[2] && n[2] == n[3] && n[3] == n[0]) {
        cout << "SAME" << endl;
    } else {
        cout << "DIFFERENT" << endl;
    }
}