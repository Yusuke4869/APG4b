#include <bits/stdc++.h>
using namespace std;

bool check(pair<int, int> x, pair<int, int> y) {
  return x.second < y.second;
}

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> data(N);

  for (int i = 0; i < N; i++) {
    cin >> data[i].first >> data[i].second;
  }

  sort(data.begin(), data.end(), check);

  for (pair<int, int> x: data) {
    cout << x.first << " " << x.second << endl;
  }
}
