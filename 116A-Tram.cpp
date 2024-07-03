#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n;
  cin >> n;
  size_t a, b, count = 0, max_count = 0;
  for (size_t i = 0; i < n; i++) {
    cin >> a >> b;
    count += b - a;
    max_count = max(max_count, count);
  }
  std::cout << max_count;
  return 0;
}
