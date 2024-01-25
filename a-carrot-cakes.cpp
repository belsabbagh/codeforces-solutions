#include <iostream>
#include <cmath>
#define PROBLEM_NAME "Carrot Cakes"

bool is_feasible(int n, int t, int k, int d)
{
  int oven1_n_batches = std::ceil((double)d / t);
  int remaining_cakes = n - (oven1_n_batches * k);
  if (remaining_cakes < 0) return false;
  int remaining_time = d % t;
  return remaining_time != 0 || remaining_cakes > k;
}

int main()
{
  std::cout << "Problem: " << PROBLEM_NAME << std::endl;
  int n = 4, t = 2, k = 1, d = 4;
  std::string result = is_feasible(n, t, k, d) ? "YES" : "NO";
  std::cout << result;
}
