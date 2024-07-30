#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  size_t count = 0;
  while (a <= b) {
    count++;
    a = 3 * a;
    b = 2 * b;
  }
  cout << count;
}
