#include <iostream>
#include <set>
using namespace std;
int main() {
  string name = "";
  cin >> name;

  set<char> chars = set<char>();
  for (auto &&i : name) {
    chars.insert(i);
  }

  string res = (chars.size() % 2) ? "IGNORE HIM!" : "CHAT WITH HER!";
  cout << res;
}
