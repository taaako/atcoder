#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    pair<int, string> content[n];
    for (int i = 0; i < n; i++) {
        cin >> content[i].second >> content[i].first;
    }

    sort(content, content + n);

    cout << content[n-2].second << endl;
}