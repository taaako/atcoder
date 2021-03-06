#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, ans;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0')
            ans.push_back('0');
        else if (str[i] == '1')
            ans.push_back('1');
        else if (str[i] == 'B' && ans.size() > 0)
            ans.pop_back();
    }
    cout << ans << endl;
}