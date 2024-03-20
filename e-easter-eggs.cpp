#include <iostream>
#include <map>
#define WINDOW_SIZE 4
#define COLORS "ROYGBIV"
std::string lay_eggs(int n)
{
  std::string sequence = COLORS;
  int offset = sequence.length();
  n -= offset;
  for (int i = 0; i < n; i++)
  {
    int new_index = sequence.length();
    char color = sequence[new_index - WINDOW_SIZE];
    sequence += color;
  }
  return sequence;
}

int main()
{
  int n;
  std::cin >> n;
  std::cout << lay_eggs(n);
}
