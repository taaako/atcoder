#include <bits/stdc++.h>
using namespace std;

int main(){
    string topping;
    int count, tprice = 0;
    cin >> topping;

    for (int i = 0; i < topping.size(); i++)
        if (topping[i] == 'o') {
            count++;
            tprice = 100 * count;
        }
    cout << 700 + tprice << endl;
}