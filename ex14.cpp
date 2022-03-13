#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> tall(3);
  cin >> tall[0] >> tall[1] >> tall[2];

  sort(tall.begin(), tall.end());
  cout << tall[2] - tall[0] << endl;
}
