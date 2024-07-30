#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u', 'y'};
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    char ch = tolower(s[i]);
    if (vowel.count(ch)) {
      continue;
    }
    cout << "." << ch;
  }
  return 0;
}
