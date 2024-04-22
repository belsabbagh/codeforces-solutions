#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    char ch = tolower(s[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'y') {
      continue;
    }
    cout << "." << ch;
  }
  return 0;
}
