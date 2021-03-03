#include <bits/stdc++.h>
using namespace std;

int main(){
    int coin_a, coin_b, toy;
    cin >> coin_a >> coin_b >> toy;

    if (coin_a + coin_b >= toy)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}