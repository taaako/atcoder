#include <bits/stdc++.h>
using namespace std;

int main(){
    int dis[3], ans = 0;
    cin >> dis[0] >> dis[1] >> dis[2];

    sort(dis,dis+3);
    ans = dis[0] + dis[1];

    cout << ans << endl;
}