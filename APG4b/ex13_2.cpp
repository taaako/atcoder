#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int N, point[1000], ave = 0, s = 0;
  cin >> N;

  for (int i = 0; i < N; ++i) {
    cin >> point[i];
    ave += point[i];
  }
  ave /= N;
  
  for (int i = 0; i < N; ++i) {
      cout << abs(ave - point[i]) << endl;
  }
}