#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int num, arr[205], ans=32;
    cin >> num;
    for (int arr_i = 0; arr_i < num; ++arr_i)
        cin >> arr[arr_i];

    for (int arr_i = 0; arr_i < num; ++arr_i)
        for (int shift_i = 0; shift_i < ans; ++shift_i)
            if ((arr[arr_i] & (1 << shift_i)) != 0)
                ans = shift_i;

    cout << ans;
}