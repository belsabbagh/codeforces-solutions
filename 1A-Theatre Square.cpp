#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long long tiles_per_dim(int d, int a) { return ceil((double)d / a); }

int main(int argc, char *argv[]) {
  unsigned long long n, m, a;
  cin >> n >> m >> a;
  unsigned long long value = tiles_per_dim(m, a) * tiles_per_dim(n, a);
  cout << value;
  return 0;
}
