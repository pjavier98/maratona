#include <bits/stdc++.h>

using namespace std;

int main() {
  vector <int> vint;
  int cases, row, num;
  cin >> cases;
  row = 10;

  for (int i = 0; i < cases; ++i) {
    for (int j = 0; j < row; ++j) {
      cin >> num;
      vint.push_back(num);
    }

    sort(vint.begin(), vint.end());

    cout << vint[1] << endl;
    vint.clear();
  }

  return 0;
}