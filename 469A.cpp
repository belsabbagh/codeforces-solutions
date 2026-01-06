#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n;
  cin >> n;
  size_t p;
  cin >> p;

  set<int> s;
  for (size_t i = 0; i < p; i++) {
    int c;
    cin >> c;
    s.insert(c);
  }

  cin >> p;
  for (size_t i = 0; i < p; i++) {
    int c;
    cin >> c;
    s.insert(c);
  }

  cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!");
  return 0;
}
