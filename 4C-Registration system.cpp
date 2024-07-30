#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  unordered_map<string, int> names;
  for (int i = 0; i < n; i++) {
    string name, fname;
    cin >> name;
    if (names.find(name) == names.end()) {
      names[name] = 1;
      cout << "OK" << endl;
      continue;
    }
    fname = name + to_string(names[name]);
    names[name]++;
    cout << fname << endl;
  }
  return 0;
}
