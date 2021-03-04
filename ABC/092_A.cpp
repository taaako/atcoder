#include <bits/stdc++.h>
using namespace std;

int main(){
    int train_tic, train_unl, bus_tic, bus_unl;
    cin >> train_tic >> train_unl >> bus_tic >> bus_unl;

    int train_min = min(train_tic, train_unl);
    int bus_min = min(bus_tic, bus_unl);

    cout << train_min + bus_min << endl;
}