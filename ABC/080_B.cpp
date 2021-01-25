#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;

  int d = stoi(str);  // 文字列を数値に変える
  //-----------------------------------
  // C#:int d = int.Parse(str);
  //-----------------------------------
  // C: int d;
  //    sscanf(str, "%d", d);
  //-----------------------------------
  int sum = 0;

  // '8' -> 0x38(16進) = 56(10進)
  // '8' - '0' -> 0x38 - 0x30 -> (char)0x08 = (int)8

  for (char chr : str)
    sum += (int)(chr - '0');
  cout << (d % sum == 0 ? "Yes" : "No") << endl;
}