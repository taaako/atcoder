#include <bits/stdc++.h>
using namespace std;

int main(){
    int life,buy,eat;
    cin >> life >> buy >> eat;

    if (buy < eat){
        if (life >= (eat - buy))
            cout << "safe" << endl;
        else
            cout << "dangerous" << endl;
    }else{
        cout << "delicious" << endl;
    }
}