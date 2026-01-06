#include <algorithm>
#include <iostream>
#define N 3
using namespace std;

int main(int argc, char *argv[]) {
  int maxval = 0;
  int a[N];
  for (size_t i = 0; i < N; i++) {
    cin >> a[i];
    maxval += a[i];
  }

  for (size_t i = 0; i < N - 1; i++) {
    maxval = max((a[i] * a[i + 1]) + a[(i + 2) % N], maxval);
    maxval = max((a[i] + a[i + 1]) * a[(i + 2) % N], maxval);
  }

  maxval = max(maxval, a[0] * a[1] * a[2]);

  cout << maxval;

  return 0;
}
