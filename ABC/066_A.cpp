#include <bits/stdc++.h>
using namespace std;

int main(){
    int cost[3], ans=0;
    cin >> cost[0] >> cost[1] >> cost[2];

    sort (cost, cost+3);
    // int a[N];        | sort(a, a+N);
    // array<int N> ar; | sort(ar.begin(), ar.end());
    // vector<int> v;   | sort(v.begin(), v.end());

    ans = cost[0] + cost[1];
    cout << ans << endl;
}