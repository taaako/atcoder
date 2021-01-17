#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int y = 0;

  for (int i = 0; i < n; i++){
    string color;
    cin >> color;

    if (color == "Y"){
      y++;
      cout << "Four" << endl;
      break;
    }
  }
  if (y == 0){
    cout << "Three" << endl;
  }
}