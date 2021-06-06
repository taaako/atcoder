#include <bits/stdc++.h>
using namespace std;

int main(){
    int tree, nuts[1000];
    cin >> tree;
    for (int i = 0; i < tree; i++)
        cin >> nuts[i];

    int count = 0;
    for (int i = 0; i < tree; i++) {
        if (nuts[i] > 10)
            count += nuts[i] - 10;
    }
    cout << count << endl;
}