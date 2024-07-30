#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n, h, w = 0, p;
  cin >> n >> h;
  for (size_t i = 0; i < n; i++) {
    cin >> p;
    w += (1 + (int)(p > h));
  }
  cout << w << endl;
  return 0;
}
