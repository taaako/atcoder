#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;

    string ans = x;
    for (int i = 0; i < x.size(); i++) {
        if (ans[i] == '.') {
            ans.erase(i);
        }
    }
    cout << ans << endl;
}