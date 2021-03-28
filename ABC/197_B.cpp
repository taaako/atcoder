#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w, x, y;
    cin >> h >> w >> x >> y;

    char s[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }

    int count = 0;
    for (int i = x-1; i < h; i++) {
        if (s[i][y-1] == '.')
            count++;
        else
            break;
    }
    for (int i = x-1; i < h && i >= 0; i--) {
        if (s[i][y-1] == '.')
            count++;
        else
            break;
    }
    for (int j = y-1; j < w; j++) {
        if (s[x-1][j] == '.')
            count++;
        else
            break;
    }
    for (int j = y-1; j < w && j >= 0; j--) {
        if (s[x-1][j] == '.')
            count++;
        else
            break;
    }

    cout << count - 3 << endl;
}