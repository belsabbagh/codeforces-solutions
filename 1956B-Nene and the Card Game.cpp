#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    int a;
    cin >> a;
    int cards_counts[a + 1];
    int score = 0;
    for (size_t i = 0; i < a + 1; i++) {
      cards_counts[i] = 0;
    }
    for (size_t j = 0; j < a; j++) {
      int x;
      cin >> x;
      cards_counts[x]++;
      score += (int)(cards_counts[x] == 2);
    }
    cout << score / 2 << endl;
  }
  return 0;
}
