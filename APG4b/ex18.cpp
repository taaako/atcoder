#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  char r[100][100];
  cin >> n >> m;

  for (int i = 0; i < 100; ++i)
    for (int j = 0; j < 100; ++j)
      r[i][j] = '-';

  for (int i = 0; i < m; ++i)
  {
    int winner, loser;
    cin >> winner >> loser;

    --winner, --loser;

    r[winner][loser] = 'o';
    r[loser][winner] = 'x';
  }

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
      if (j == n - 1)
        cout << r[i][j] << endl;
      else
        cout << r[i][j] << " ";
  }
}