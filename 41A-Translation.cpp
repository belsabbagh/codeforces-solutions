#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string s, t;
  cin >> s;
  cin >> t;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[s.size() - 1 - i]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
