#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string hello = "hello";
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (hello.empty()) {
      cout << "YES";
      return 0;
    }
    if (s[i] == hello[0]) {
      hello.erase(hello.begin());
    }
  }
  if (hello.empty()) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}
