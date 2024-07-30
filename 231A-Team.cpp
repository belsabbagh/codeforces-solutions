#include <iostream>

using namespace std;

int main() {
  // Number of statements
  int n;
  cin >> n;
  int x = 0;
  for (int i = 0; i < n; ++i) {
    string statement;
    cin >> statement;
    bool first_is_x = (statement[0] ^ 'X') == 0;
    char op = (statement[0] & -first_is_x) |
              (statement[statement.length() - 1] & ~(-first_is_x));
    x += op == '+' ? 1 : -1;
  }
  cout << x << endl;
}
