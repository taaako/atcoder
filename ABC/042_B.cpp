#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, leng;
    cin >> n >> leng;
    string str[n];
    for (int i = 0; i < n; i++)
        cin >> str[i];

    // イテレータ
    sort(str, str+n);

    for (int i = 0; i < n; i++)
        cout << str[i];
}