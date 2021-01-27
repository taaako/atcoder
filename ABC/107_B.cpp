#include <bits/stdc++.h>
using namespace std;

int main() {
  bool display_row[100] = { false }, display_column[100] = { false };
  int height, width;
  string input[100];
  cin >> height >> width;

  for (int y = 0; y < height; ++y)
  {
    string str;
    cin >> str;
    input[y] = str;
    for (int x = 0; x < width; ++x)
    {
      // '#'の時true , それ以外の時false または trueが1回でもきたらtrue
      display_row[y] = (display_row[y] || (str.at(x) == '#'));
      display_column[x] = (display_column[x] || (str.at(x) == '#'));
    }
  }

  for (int y = 0; y < height; ++y)
    if (display_row[y])
    {
      for (int x = 0; x < width; ++x)
        if (display_column[x])
          cout << input[y].at(x);
      cout << endl;
    }

}