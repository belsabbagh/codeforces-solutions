#include <cmath>
#include <iostream>

bool is_feasible(int n, int t, int k, int d) {
  int oven1_n_batches = std::ceil((double)d / t);
  int remaining_cakes = n - (oven1_n_batches * k);
  if (remaining_cakes <= 0)
    return false;
  int remaining_time = d % t;
  return remaining_time > 0 || remaining_cakes > k;
}

int main() {
  int n, t, k, d;
  std::cin >> n >> t >> k >> d;
  std::string result = is_feasible(n, t, k, d) ? "YES" : "NO";
  std::cout << result;
}
