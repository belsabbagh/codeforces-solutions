#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  getline(cin, s);
  set<char> letters;
  for (size_t i = 1; i < s.length() - 1; i += 3) {
    letters.insert(s[i]);
  }
  cout << letters.size() << endl;
  return 0;
}
