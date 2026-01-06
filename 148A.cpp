#include <iostream>
using namespace std;

bool isnth(int n, int k) { return n >= k && n % k == 0; }

int main(int argc, char *argv[]) {
  int k, l, m, n, d, c = 0;
  cin >> k >> l >> m >> n >> d;
  if (k == 1 || l == 1 || m == 1 || n == 1) {
    cout << d << endl;
    return 0;
  }
  for (size_t i = 1; i <= d; i++) {
    if (isnth(i, k) || isnth(i, l) || isnth(i, m) || isnth(i, n)) {
      c++;
    }
  }

  cout << c << endl;
  return 0;
}
