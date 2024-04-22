#include <array>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  int n;
  array<int, 2> scores = {0};
  cin >> n;
  vector<int> cards = vector<int>(n);
  for (size_t i = 0; i < n; i++) {
    cin >> cards[i];
  }
  size_t turn = 0;
  while (!cards.empty()) {
    size_t index_to_pop =
        (cards[0] > cards[cards.size() - 1]) ? 0 : cards.size() - 1;
    scores[turn] = scores[turn] + cards[index_to_pop];
    cards.erase(cards.begin() + index_to_pop);
    turn = 1 - turn;
  }

  for (int element : scores) {
    std::cout << element << " ";
  }
}
