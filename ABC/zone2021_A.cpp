#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'Z' && s[i+1] == 'O' && s[i+2] == 'N' && s[i+3] == 'e')
            count++;
    }
    cout << count << endl;
}