#include <iostream>
#include <string>

using namespace std;

int compare_strings(string str1, string str2) {

  for (int i = 0; i < str1.length(); i++) {
    if (tolower(str1[i]) < tolower(str2[i])) {
      return -1;
    }

    else if (tolower(str1[i]) > tolower(str2[i])) {
      return 1;
    }
  }

  return 0;
}

int main() {
  string word1, word2;
  cin >> word1 >> word2;

  int result = compare_strings(word1, word2);
  cout << result << endl;
}