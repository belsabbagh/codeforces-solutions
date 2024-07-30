#include <bits/stdc++.h>

using namespace std;

struct node {
  int val;
  node *children[2];
};
node *createNewNode(int x) {
  node *nn = new node;
  nn->val = x;
  for (int i = 0; i < 2; i++) {
    nn->children[i] = nullptr;
  }
  return nn;
}

void bstInsert(node *&root, int x) {
  if (root == nullptr) {
    root = createNewNode(x);
    return;
  }

  node *child = root->children[(int)x > root->val];
  if (child == nullptr) {
    child = createNewNode(x);
    return;
  }
  bstInsert(child, x);
}

int main(int argc, char *argv[]) {
  int n = 4, c = 0, dif = 0;
  int a[n];
  for (size_t i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  for (size_t i = 0; i < n; i++)
    if (a[i] != a[i + 1])
      c++;

  cout << n - c << endl;
  return 0;
}
