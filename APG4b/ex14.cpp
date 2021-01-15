#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  int s = min(min(a,b),c);
  int g = max(max(a,b),c);
  
  cout << g-s << endl;
}