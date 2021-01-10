#include <bits/stdc++.h>
using namespace std;

int main() {
    string str_a, str_b;
    cin >> str_a >> str_b;

    if(str_a.size() != str_b.size())
        if (str_a.size() > str_b.size())
            cout << "GREATER" << endl;
        else
            cout << "LESS" << endl;
    else
    {
    for (int i= 0, l = str_a.size(); i < l; ++i)
        if (str_a.at(i) > str_b.at(i))
        {
            cout << "GREATER" << endl;
            return 0;
        }
        else if (str_a.at(i) < str_b.at(i))
        {
            cout << "LESS" << endl;
            return 0;
        }
    cout << "EQUAL" << endl;
    }
}