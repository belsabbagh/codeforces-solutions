#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, sum = 0, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    sum += x;
  }
  float res = (float)sum / n;
  cout << res;
  return 0;
}
