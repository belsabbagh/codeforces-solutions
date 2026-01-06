#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int d[] = {100, 20, 10, 5, 1};
  int n, x, c = 0;
  cin >> n;
  while (n > 0) {
    for (int i = 0; i < 5; i++) {
      x = d[i];
      if (n >= x) {
        c++;
        n -= x;
        break;
      }
    }
  }
  cout << c << endl;
  return 0;
}
