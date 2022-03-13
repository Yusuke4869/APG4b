#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, tmp, avg, sum = 0;
  cin >> N;
  vector<int> score(N);

  for (int i = 0; i < N; i++) {
    cin >> tmp;
    score[i] = tmp;
    sum+=tmp;
  }

  avg = sum / N;

  for (int i = 0; i < N; i++) {
    tmp = score[i];
    cout << abs(avg - tmp) << endl;
  }
}
