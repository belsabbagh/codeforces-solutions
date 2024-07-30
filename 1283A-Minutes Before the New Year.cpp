#include <iostream>

using namespace std;
int main() {
  const int max_mins = 24 * 60;
  int n;
  cin >> n;

  for (size_t i = 0; i < n; i++) {
    int h, m;
    cin >> h >> m;
    int mins_left = max_mins - ((h * 60) + m);
    cout << mins_left << endl;
  }
}
