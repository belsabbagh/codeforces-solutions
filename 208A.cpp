#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  string s, res = "";
  cin >> s;
  size_t i = 0;
  while (i < s.length()) {
    char c = s[i];
    if (c == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      if (!res.empty())
        res += ' ';
      i += 3;
      continue;
    }
    res += c;
    i++;
  }
  cout << res << endl;
  return 0;
}
