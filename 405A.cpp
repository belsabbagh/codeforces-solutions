#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n;
  cin >> n;
  int a[n];
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (size_t i = 0; i < n; i++) {
    for (size_t j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        a[j] = a[i] + a[j];
        a[i] = a[j] - a[i];
        a[j] = a[j] - a[i];
      }
    }
  }

  for (size_t i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }

  return 0;
}
