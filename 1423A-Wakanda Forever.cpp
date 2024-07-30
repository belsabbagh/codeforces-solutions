#include <bits/stdc++.h>
#include <vector>
#define NONE -1

using namespace std;

vector<size_t> stable_matching(const vector<vector<size_t>> &preferences) {
  size_t n = preferences.size();
  vector<size_t> proposals(n, -1);
  vector<size_t> matches(n, -1);

  for (size_t i = 0; i < n; ++i) {
    size_t j = 0;
    while (j < n && proposals[j] != -1) {
      ++j;
    }
    if (j == n) {
      break;
    }
    size_t city = j;
    for (size_t k = 0; k < n; ++k) {
      if (matches[k] == -1 &&
          preferences[k][j] < preferences[k][proposals[city]]) {
        city = k;
      }
    }
    proposals[city] = preferences[city][j];
    matches[city] = j;
  }

  return matches;
}

int main() {
  size_t n;
  cin >> n;
  vector<vector<size_t>> costs(n, vector<size_t>(n - 1));

  for (size_t i = 0; i < n; ++i) {
    for (size_t j = 0; j < n - 1; ++j) {
      cin >> costs[i][j];
    }
  }

  vector<size_t> matching = stable_matching(costs);

  for (size_t city : matching) {
    cout << city + 1 << " ";
  }
  cout << endl;

  return 0;
}
