#include <iostream>
#include <string>

using namespace std;
int main() {

  int t, n;
  cin >> t;

  string path;

  // test cases
  for (int i = 1; i <= t; ++i) {
    cin >> n;
    cin >> path;
    int first_occur = -1;
    int coins = 0;

    // find the consecutive thorns
    for (int j = 0; j < path.length(); ++j) {
      if (path[j] == '*' && path[j + 1] == '*') {
        first_occur = j;
      }

      else {
        for (int k = 0; k < path.length(); ++k) {
          if (path[k] == '@') {
            coins++;
          }
          break;
        }
      }
    }

    for (int i = 0; i <= first_occur; ++i) {
      if (path[i] == '@') {
        coins++;
      }
    }

    cout << coins << '\n';
  }

  return 0;
}