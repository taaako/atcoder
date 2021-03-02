#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b;
  cin >> n >> a >> b;

  int s = 0;
  s = n * a;

  cout << min(s,b) << endl;
}