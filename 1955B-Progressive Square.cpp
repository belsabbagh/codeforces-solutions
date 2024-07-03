#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
#include <unordered_map>

using namespace std;

bool casefn() {
  uint32_t n, c, d;
  cin >> n >> c >> d;
  unordered_map<uint32_t, short> values = unordered_map<uint32_t, short>();
  uint32_t minval = INT_MAX;

  for (size_t i = 0; i < (n * n); i++) {
    uint32_t nval;
    cin >> nval;
    values[nval]++;
    minval = min(minval, nval);
  }
  for (size_t i = 0; i < n; i++) {
    uint32_t val = minval;

    for (size_t j = 0; j < n; j++) {
      int nval = val + j * d;
      if (values.find(nval) == values.end() || values[nval] == 0) {
        return false;
      }
      values[nval]--;
    }
    minval = val + c;
  }
  return true;
}

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  for (size_t i = 0; i < t; i++) {
    bool res = casefn();
    cout << ((res) ? "YES" : "NO") << endl;
  }
  return 0;
}
