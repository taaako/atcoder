#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '6')
            s[i] = '9';
        else if (s[i] == '9')
            s[i] = '6';
        else
            s[i] = s[i];
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}