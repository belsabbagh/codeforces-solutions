#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, p;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> p;
    a[p - 1] = i + 1;
  }
  cout << a[0];
  for (int i = 1; i < n; i++) {
    cout << " " << a[i];
  }
  return 0;
}
