#include <iostream>

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int n;
  std::cin >> n;
  int *nums = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> nums[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        swap(nums[j], nums[j + 1]);
      }
    }
  }

  swap(nums[0], nums[n - 1]);
  for (int i = 0; i < n; i++) {
    std::cout << nums[i] << " ";
  }
}
