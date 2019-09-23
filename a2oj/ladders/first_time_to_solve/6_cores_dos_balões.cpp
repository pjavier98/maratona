#include <bits/stdc++.h>

using namespace std;

int main() {
  vector <int> balloons_colors;

  int cases;
  cin >> cases;

  int amount_balloons, easiest, hardest, problem;
  for (int i = 0; i < cases; ++i) {
    cin >> amount_balloons >> easiest >> hardest;

    for (int j = 0; j < amount_balloons; ++j) {
      cin >> problem;
      balloons_colors.push_back(problem);
    }

    int end = balloons_colors.size() - 1;

    if (balloons_colors[0] == easiest and balloons_colors[end] == hardest) {
      cout << "BOTH" << endl;
    } else {
      if (balloons_colors[0] == easiest) {
        cout << "EASY" << endl;
      } else if (balloons_colors[end] == hardest) {
        cout << "HARD" << endl;
      } else {
        cout << "OKAY" << endl;
      }
    }

    balloons_colors.clear();
  }

  return 0;
}