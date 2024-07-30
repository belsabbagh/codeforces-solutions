#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n, a = 0, d = 0;
  char w;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> w;
    a += (int)(w == 'A');
    d += (int)(w == 'D');
    if (a + (n - i - 1) < d) {
      cout << "Danik";
      return 0;
    }
    if (d + (n - i - 1) < a) {
      cout << "Anton";
      return 0;
    }
  }
  cout << "Friendship" << endl;
  return 0;
}
