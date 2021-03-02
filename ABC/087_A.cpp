#include <bits/stdc++.h>
using namespace std;

int main(){
    int money, cake, donut;
    cin >> money >> cake >> donut;

    cout << (money - cake) % donut << endl;
}