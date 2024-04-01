#include <iostream>
using namespace std;

int main() {

  string word;

  cin >> word;

  int upCa_words, loCa_words;
  upCa_words = 0;
  loCa_words = 0;

  for (int i = 0; i < word.length(); i++) {
    if (word[i] >= 'A' && word[i] <= 'Z') {
      upCa_words++;
    }

    else if (word[i] >= 'a' && word[i] <= 'z') {
      loCa_words++;
    }
  }

  if (upCa_words > loCa_words) {

    for (int i = 0; i < word.length(); i++) {
      word[i] = toupper(word[i]);
    }
    cout << word;

  }

  else if (upCa_words <= loCa_words) {

    for (int i = 0; i < word.length(); i++) {
      word[i] = tolower(word[i]);
    }
    cout << word;
  }

  return 0;
}