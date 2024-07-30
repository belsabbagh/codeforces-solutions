#include <iostream>

size_t next_index_to_add(int n, int snack_sizes[], int low) {
  for (int i = 0; i < n; i++) {
    if (snack_sizes[i] == low) {
      return i;
    }
  }
  return n;
}

int main() {
  int n;
  std::cin >> n;
  int snack_sizes[n];
  for (int i = 0; i < n; i++) {
    std::cin >> snack_sizes[i];
  }
  std::string solution = "";
  int low = n;
  for (int i = 0; i < n; i++) {
    int snack = snack_sizes[i];
    if (snack == low) {
      solution += std::to_string(snack);
      low--;
      int j = i - 1;
      while (j >= 0) {
        solution += " " + std::to_string(snack_sizes[j]);
        low--;
        j--;
      }
      for (int j = i - 1; j >= 0; j--) {
        if (snack_sizes[j] == low) {
          solution += " " + std::to_string(snack_sizes[j]);
          low--;
        }
      }
    }
    if (i == n - 1)
      continue;
    solution += "\n";
  }
  std::cout << solution;
}
