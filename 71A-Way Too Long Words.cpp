#include <iostream>
#include <string>

using namespace std;

string abbreviate(string word) {
  if (word.length() <= 10) return word;
  return word[0] + to_string(word.length() - 2) + word[word.length() - 1];
}

int main() {
    // Number of words
    int n;
    cin >> n;

    string words[n];

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }
    for (int i = 0; i < n; ++i) {
      string res = abbreviate(words[i]);
      cout << res << endl;
    }

}
