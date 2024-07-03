#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


class Solution {
public:
  int openLock(vector<string> &deadends, string target) {
    unordered_set<string> vis = unordered_set<string>();
    for (string d : deadends) {
      vis.insert(d);
    }
    if(vis.count("0000")) {
      return -1;
    }
    queue<pair<string, int>> states;

    states.push({"0000", 0});


    while (!states.empty()) {
      string state = states.front().first;
      int moves = states.front().second;
      states.pop();

      if (state == target) {
        return moves;
      }

      for (int i = 0; i < 4; i++) {
        string newstate = state;
        int digit = state[i] - '0' + 10;
        for (int f: {1, -1}) {
          newstate[i] = ((digit + f) % 10) + '0';
          if (vis.find(newstate) != vis.end()) {
            continue;
          }
          vis.insert(newstate);
          states.push({newstate, moves + 1});
        }
      }
    }

    return -1;
  }
};