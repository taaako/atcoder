#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,form,form_money,other;
    cin >> n >> form >> form_money >> other;

    int ans = 0;
    if (n >= form){
        ans = ((n-form)*other) + (form*form_money);
    }else{
        ans = n*form_money;
    }
    cout << ans << endl;
}