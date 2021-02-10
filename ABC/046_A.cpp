#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    if (a == b && a == c)
        count = 1;
    else if(a == b || a == c || b == c)
        count = 2;
    else
        count =3;

    cout << count << endl;
}