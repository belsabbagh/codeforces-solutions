#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  string x, y;
  cin >> x >> y;
  for (int i = 0; i < x.size(); i++) {
    cout << (int)(x[i] != y[i]);
  }
  return 0;
}
