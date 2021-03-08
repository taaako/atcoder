#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int lucas[86];
    lucas[0] = 2;
    lucas[1] = 1;
    for (int i = 2; i < num+1; i++)
        lucas[i] = lucas[i-1] + lucas[i-2];

    cout << lucas[num] << endl;
}