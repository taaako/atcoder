#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  for (int i = 0; i < N; i++) {
	string op;
    int B;
    cin >> op >> B;
    
    if (op == "+") {
      A += B;
    }else if (op == "-") {
      A -= B;
    }else if (op == "*") {
      A *= B;
    }else{
      if (B == 0) {
        cout << "error" << endl;
      	break;
      }
      A /= B;
    }
    cout << i+1 << ":" << A << endl;
  }
}
