#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  int a, b, c;

  for (int i = 1; i <= t; ++i) {

    cin >> a >> b >> c;

    if (a + b >= 10 || b + c >= 10 || a + c >= 10) {
      cout << "yEs" << '\n';

    }

    else {
      cout << "NO" << '\n';
    }
  }

  return 0;
}