#include <iostream>
#include <unordered_set>

using namespace std;
int main() {
  string name = "";
  cin >> name;

  unordered_set<char> chars = unordered_set<char>();
  for (auto &&i : name) {
    chars.insert(i);
  }

  string res = (chars.size() % 2) ? "IGNORE HIM!" : "CHAT WITH HER!";
  cout << res;
}
