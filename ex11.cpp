#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, N, tmp, B;
  string op;
  cin >> N >> A;

  tmp = A;

  for (int i = 1; i <= N; i++) {
    cin >> op >> B;

    if (op == "+") {
      tmp+=B;
    } else if (op == "-") {
      tmp-=B;
    } else if (op == "*") {
      tmp*=B;
    } else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      tmp/=B;
    }

    cout << i << ":" << tmp << endl;
  }
}
