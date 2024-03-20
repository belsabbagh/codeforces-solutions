#include <iostream>
#include <cmath>

bool is_feasible(int n, int t, int k, int d)
{
  int oven1_n_batches = std::ceil((double)d / t);
  int remaining_cakes = n - (oven1_n_batches * k);
  if (remaining_cakes <= 0) return false;
  int remaining_time = d % t;
  return remaining_time > 0 || remaining_cakes > k;
}

int main()
{
  // n: number of cakes
  // t: time to bake a batch of cakes
  // k: number of cakes in a batch
  // d: time to build a second oven
  // output: YES if it is possible to bake all cakes in time, NO otherwise 
  int n, t, k, d;
  std::cin >> n >> t >> k >> d;
  std::string result = is_feasible(n, t, k, d) ? "YES" : "NO";
  std::cout << result;
}
