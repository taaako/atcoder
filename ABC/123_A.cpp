#include <bits/stdc++.h>
using namespace std;

int main(){
    int antennas[5], dis;
    for (int i = 0; i < 5; i++) {
        cin >> antennas[i];
    }
    cin >> dis;

    if (antennas[4] - antennas[0] <= dis)
        cout << "Yay!" << endl;
    else
        cout << ":(" << endl;
}