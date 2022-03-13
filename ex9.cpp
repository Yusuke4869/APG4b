#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;
 
  int two, three;

  two = x * (a + b);
  cout << two << endl;

  three = two * two;
  cout << three << endl;

  three--;
  cout << three << endl;
}
