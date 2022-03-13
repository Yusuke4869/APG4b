#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  bool isExist = false;
  int tmp;
  for (int x: data) {
    if (x == tmp) {
      isExist = true;
      break;
    }
    tmp = x;
  }

  if (isExist) cout << "YES" << endl;
  else cout << "NO" << endl;
}
