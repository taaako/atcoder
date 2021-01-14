#include <bits/stdc++.h>
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
      if (point[i] <= ave) {
          s = ave - point[i];
      }else{
          s = point[i] - ave;
      }
      cout << s << endl;
  }
}