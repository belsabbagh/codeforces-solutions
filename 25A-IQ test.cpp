#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, p, e = 0, o = 0, ei = 0, oi = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p;
    if (e == 1 && o > 1) {
      cout << (ei + 1) << endl;
      return 0;
    }
    if (o == 1 && e > 1) {
      cout << (oi + 1) << endl;
      return 0;
    }
    if (p % 2 == 0) {
      e++;
      ei = i;
    } else {
      o++;
      oi = i;
    }
  }
  if (e == 1 && o > 1) {
    cout << (ei + 1) << endl;
    return 0;
  }
  if (o == 1 && e > 1) {
    cout << (oi + 1) << endl;
    return 0;
  }

  return 0;
}
