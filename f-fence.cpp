#include <iostream>
#include <limits.h>
#define PROBLEM_NAME "Fence"

int first_fence_to_remove(int n, int k, int heights[])
{
  int i = 0;
  int min_sum = INT_MAX;
  int min_sum_index = -1;
  while ((i + k) < n)
  {
    int current_sum = 0;
    for (int j = 0; j < k; j++)
    {
      current_sum += heights[i + j];
    }
    if (current_sum < min_sum)
    {
      min_sum = current_sum;
      min_sum_index = i + 1;
    }
    i++;
  }
  return min_sum_index; 
}

int main()
{
  std::cout << "Problem: " << PROBLEM_NAME << std::endl;
  int n = 7, k = 3;
  int heights[] = {1, 2, 6, 1, 1, 7, 1};
  int min_sum_index = first_fence_to_remove(n,k, heights);
  std::cout << min_sum_index << std::endl;
}
