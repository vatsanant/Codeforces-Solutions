#include <iostream>
#include <string>
using namespace std;

int main() {

  int n;
  cin >> n;

  string No_of_Games;

  cin >> No_of_Games;

  int A = 0;
  int B = 0;

  for (int i = 0; i < n; ++i) {
    if (No_of_Games[i] == 'A') {
      A++;
    }

    else {
      B++;
    }
  }

  if (A > B) {
    cout << "Anton" << '\n';

  }

  else if (A < B) {
    cout << "Danik" << '\n';

  }

  else {
    cout << "Friendship" << '\n';
  }

  return 0;
}