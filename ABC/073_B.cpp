#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  
  int s = 0;
  for (int i = 0; i < n; i++){
    int l,r;
    cin >> l >> r;
    s += (r - l) + 1;
  }
  cout << s << endl;
}