#include <bits/stdc++.h>
using namespace std;

int main(){
    int ah, aw, bh, bw;
    cin >> ah >> aw >> bh >> bw;

    int as = ah * aw;
    int bs = bh * bw;

    if (as >= bs){
        cout << as << endl;
    }else{
        cout << bs << endl;
    }
}