#include <algorithm>
#include <iostream>

using namespace std;

int main() {

  string name;
  getline(cin, name);

  // step 1: remove the repeating letters

  string new_name = unique(name.begin(), name.end());

  return 0;
}