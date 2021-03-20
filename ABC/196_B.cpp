#include <bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin >> num;

    string ans;
    for (int i = 0; i < num.size(); i++) {
        ans.push_back(num[i]);
        if (num[i] == '.')
            break;
    }
    if (ans[ans.size() - 1] == '.') {
        ans.pop_back();
        cout << ans;
    }
    else
        cout << ans;
}