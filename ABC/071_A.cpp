#include <bits/stdc++.h>
using namespace std;

int main(){
    int position, a, b;
    cin >> position >> a >> b;

    int dis_a = 0, dis_b = 0;
    dis_a = abs(position - a);
    dis_b = abs(position - b);

    if (dis_a < dis_b)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}