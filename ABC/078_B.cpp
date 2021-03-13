#include <bits/stdc++.h>
using namespace std;

int main(){
    int chair, human, gap;
    cin >> chair >> human >> gap;

    int n, jast;
    n = chair / (human + gap);
    jast = human * n + gap * (n+1);

    if (jast == chair)
        cout << n << endl;
    else if (jast > chair)
        cout << n-1 << endl;
    else
        cout << n+1 << endl;
}