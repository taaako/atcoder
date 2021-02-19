#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int group[] = {0,1,2,1,3,1,3,1,1,3,1,3,1};
    if (group[x] == group[y])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}