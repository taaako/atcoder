#include <bits/stdc++.h>
using namespace std;

int main(){
    int ball, color;
    int ans = 0;
    cin >> ball >> color;

    ans = color * pow((color - 1), ball - 1);
    cout << ans << endl;
}