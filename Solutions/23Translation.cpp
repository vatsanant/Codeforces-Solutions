#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string t, s;
  cin >> t >> s;

  reverse(t.begin(), t.end());

  if (t == s) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}