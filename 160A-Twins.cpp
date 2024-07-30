#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n, sum = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  sum = sum / 2;
  int count = 0, ans = 0;
  sort(arr, arr + n);
  for (int i = n - 1; i >= 0; i--) {
    ans += arr[i];
    count++;
    if (ans > sum) {
      break;
    }
  }
  cout << count << endl;
  return 0;
}
