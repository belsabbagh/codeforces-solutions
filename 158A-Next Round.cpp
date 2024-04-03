#include <iostream>

using namespace std;

int main()
{
  size_t n, k;
  cin >> n >> k;
  size_t count = 0;
  int prev_score = 0;
  for (size_t i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    count += static_cast<bool>(((i <= k) || p == prev_score) && (p > 0));
    prev_score = p;
  }
  cout << count;
}
