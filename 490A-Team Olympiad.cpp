#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(int argc, char *argv[]) {
  int n, x;
  cin >> n;
  array<queue<int>, 3> arr{queue<int>(), queue<int>(), queue<int>()};
  for (int i = 0; i < n; i++) {
    cin >> x;
    arr[x - 1].push(i + 1);
  }
  for (int i = 0; i < 3; i++) {
    if (arr[i].size() == 0) {
      cout << 0;
      return 0;
    }
  }
  int min_size = min({arr[0].size(), arr[1].size(), arr[2].size()});
  cout << min_size << endl;
  for (int i = 0; i < min_size; i++) {
    cout << arr[0].front() << " " << arr[1].front() << " " << arr[2].front()
         << endl;
    for (int j = 0; j < 3; j++) {
      arr[j].pop();
    }
  }
  return 0;
}
