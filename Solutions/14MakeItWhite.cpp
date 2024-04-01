#include <iostream>
#include <string>
using namespace std;
int main() {

  int n, b;
  cin >> n;
  string word;
  char letter = 'B';

  for (int i = 1; i <= n; ++i) {
    cin >> b;

    cin >> word;

    // First Occurence
    size_t first_index = word.find(letter);
    // cout << first_index;

    // Last Occurence
    size_t last_index = word.rfind(letter);
    // cout << last_index;
    string substring;

    for (int j = first_index; j <= last_index; ++j) {

      substring += word[j];
    }

    cout << substring.length() << '\n';
  }

  return 0;
}
