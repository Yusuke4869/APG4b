#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, a, b;
  cin >> N >> M;
  vector<vector<string>> result(N, vector<string>(N, "-"));

  for (int i = 0; i < M; i++) {
    cin >> a >> b;
    result[a - 1][b - 1] = "o";
    result[b - 1][a - 1] = "x";
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (j != 0) cout << " ";
      cout << result[i][j];
    }
    cout << endl;
  }
}
