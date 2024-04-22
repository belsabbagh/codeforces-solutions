#include <bits/stdc++.h>
#include <cctype>
typedef int (*CharFunction)(int);
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;
  size_t up_count = 0;
  for (size_t i = 0; i < s.length(); i++) {
    up_count += (int)(s[i] >= 65 && s[i] < 65 + 26);
  }
  CharFunction ops[] = {&tolower, &toupper};
  CharFunction op = ops[(size_t)(up_count > (s.length() - up_count))];

  for (size_t i = 0; i < s.length(); i++) {
    s[i] = op(s[i]);
  }

  cout << s;

  return 0;
}
