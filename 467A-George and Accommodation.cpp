#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  size_t n, count = 0;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    int p, q;
    cin >> p >> q;
    count += (int)(q - p >= 2);
  }
  cout << count << endl;
  return 0;
}
