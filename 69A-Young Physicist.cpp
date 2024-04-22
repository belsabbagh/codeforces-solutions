#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  int a = 0, b = 0, c = 0;
  int a1, a2, a3;
  for (int i = 0; i < n; i++) {
    cin >> a1 >> a2 >> a3;
    a += a1;
    b += a2;
    c += a3;
  }
  cout << ((a == 0 && b == 0 && c == 0) ? "YES" : "NO");
  return 0;
}
