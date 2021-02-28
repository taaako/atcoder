#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, rts;
    cin >> str >> rts;

    reverse(rts.begin(), rts.end());
    if (str == rts)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}