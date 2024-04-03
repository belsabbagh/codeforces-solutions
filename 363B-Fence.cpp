#include<iostream>
#include <limits.h>

int get_min_sum_index(int n, int k, int heights[])
{
  int min_sum = 0;
  int min_sum_idx = 0;
  for (int i = 0; i < k; i++)
  {
    min_sum += heights[i];
  }
  int current_sum = min_sum;
  for (int i = 1; i < n - k + 1; i++)
  {
    current_sum = current_sum - heights[i - 1] + heights[i + k - 1];
    if (current_sum < min_sum)
    {
      min_sum = current_sum;
      min_sum_idx = i;
    }
  }
  return min_sum_idx;
}

int first_fence_to_remove(int n, int k)
{
    int min_sum = 0;
    int min_sum_idx = 0;
    int current_sum = 0;
    int prev_height = 0;

    for (int i = 1; i < n - k + 1; i++)
    {
        int new_height;
        std::cin >> new_height;
        current_sum = current_sum - prev_height + new_height;
        prev_height = new_height;
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            min_sum_idx = i;
        }
    }
  return min_sum_idx + 1;
}

int main()
{
  int n, k;
  std::cin >> n >> k;
  int min_sum_index = first_fence_to_remove(n, k);
  std::cout << min_sum_index << std::endl;
}
