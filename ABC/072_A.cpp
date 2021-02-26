#include <bits/stdc++.h>
using namespace std;

int main(){
    int sand, time;
    cin >> sand >> time;

    if ((sand - time) > 0)
        cout << sand - time << endl;
    else
        cout << 0 << endl;
}