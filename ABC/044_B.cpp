#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int n = str.size();
    int counter[n];
    for (int i = 0; i < n; i++) {
        // count(first, last, x);
        // (first,last)内に、xがいくつあるか計算してくれる
        counter[i] = count(str.begin(), str.end(), str[i]);
        if (counter[i] % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}