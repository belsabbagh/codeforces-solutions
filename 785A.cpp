#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  size_t n, c = 0;
  cin >> n;
  string s;
  for (size_t i = 0; i < n; i++) {
    cin >> s;
    char first = s[0];
    switch (first) {
    case 'T':
      c += 4;
      break;
    case 'C':
      c += 6;
      break;
    case 'O':
      c += 8;
      break;
    case 'D':
      c += 12;
      break;
    case 'I':
      c += 20;
      break;
    }
  }
  cout << c << endl;
  return 0;
}
