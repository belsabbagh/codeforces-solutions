#include <cctype>
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n;
  cin >> n;
  set<char> s;
  for (size_t i = 0; i < n; i++) {
    char c;
    cin >> c;
    s.insert(tolower(c));
  }
  cout << (s.size() == 26 ? "YES" : "NO");
  return 0;
}
