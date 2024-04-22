#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int k, n, w;
  cin >> k >> n >> w;
  int cost = 0;
  for (size_t i = 1; i <= w; i++) {
    cost += i * k;
  }
  cout << max(0, cost-n);
  return 0;
}
