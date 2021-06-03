#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, entrants[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> entrants[i];
    }

    for (int i = 0; i < n; i++) {
        if (entrants[i] % 2 == 0) {
            if (entrants[i] % 3 != 0 && entrants[i] % 5 != 0) {
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
}