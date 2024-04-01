#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;

  string word;

  for (int i = 1; i <= n; ++i) {

    int B_OCR = 0;
    int A_OCR = 0;

    cin >> word;
    for (int j = 0; j < word.length(); j++) {
      if (word[j] == 'A') {
        A_OCR++;
      }

      else {
        B_OCR++;
      }
    }
    if (A_OCR > B_OCR) {
      cout << "A" << '\n';
    } else {
      cout << "B" << '\n';
    }
  }
  return 0;
}