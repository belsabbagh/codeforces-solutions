#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int n) {
  while (n > 0) {
    if (n % 10 != 4 && n % 10 != 7) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (!is_lucky(i)) {
      continue;
    }
    if ((n % i) == 0) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
