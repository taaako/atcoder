#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  
  int s = 0;
  s = a * b;
  
  if (s % 2 != 0)
    cout << "Odd" << endl;
  else
    cout << "Even" << endl;
}