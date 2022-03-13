#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int tmp = 1;
 
  for (int i = 0; i < S.size(); i++) {
    if (i % 2 == 1) {
      if (S.at(i) == '+') tmp+=1;
      else if (S.at(i) == '-') tmp-=1;
    }
  }

  cout << tmp << endl;
}
