#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, count = 0, prev = 0, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    count += (int)(prev != x);
    prev = x;
  }
  cout << count << endl;
  return 0;
}
