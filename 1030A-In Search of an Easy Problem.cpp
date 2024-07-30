#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n, x;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> x;
    if (x == 1) {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";
  return 0;
}
