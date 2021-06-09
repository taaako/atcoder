#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;

    int left = s / 100;
    int right = s % 100;

    if (s == 0000)
        cout << "NA" << endl;
    else if (left <= 12 && right == 00)
        cout << "MMYY" << endl;
    else if (right <= 12 && left == 00)
        cout << "YYMM" << endl;
    else if (left <= 12 && right <= 12)
        cout << "AMBIGUOUS" << endl;
    else if (left <= 12 && left != 00)
        cout << "MMYY" << endl;
    else if (right <= 12 && right != 00)
        cout << "YYMM" << endl;
    else
        cout << "NA" << endl;
}