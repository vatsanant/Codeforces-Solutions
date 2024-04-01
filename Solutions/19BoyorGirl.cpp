#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string uname;
  cin >> uname;
  int c = 0;

  sort(uname.begin(), uname.end());

  for (int i = 0; i < uname.length(); ++i) {

    if (uname[i] != uname[i + 1]) {
      c++;
    }
  }

  if (c % 2 == 0) {
    cout << "CHAT WITH HER!\n";
  }

  else {
    cout << "IGNORE HIM!\n";
  }

  return 0;
}