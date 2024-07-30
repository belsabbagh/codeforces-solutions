#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  long long n;
  cin >> n;
  cout << ((n % 2 == 0) ? n : -(n + 1)) / 2;
  return 0;
}
