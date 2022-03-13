#include <bits/stdc++.h>
using namespace std;

bool check(pair<int, int> x, pair<int, int> y) {
  return x.second > y.second;
}

int main() {
  int N, a;
  map<int, int> dic;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> a;
    if (!dic.count(a)) dic[a] = 0;
    dic[a]++;
  }

  vector<pair<int, int>> data(dic.size());
  int i = 0;
  for (pair<int, int> x: dic) {
    data[i].first = x.first;
    data[i].second = x.second;
    i++;
  }

  sort(data.begin(), data.end(), check);
  cout << data[0].first << " " << data[0].second << endl;
}
