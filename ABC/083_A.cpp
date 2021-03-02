#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  int l = 0;
  l = a + b;
  int r = 0;
  r = c + d;

  if (l > r)
    cout << "Left" << endl;
  else if (l == r)
    cout << "Balanced" << endl;
  else
    cout << "Right" << endl;
}