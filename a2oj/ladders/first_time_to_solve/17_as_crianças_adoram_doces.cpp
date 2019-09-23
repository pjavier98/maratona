#include <bits/stdc++.h>

using namespace std;

int main() {
  int cases;
  cin >> cases;

  int dif_candies, min_candies, amount_candies;

  for (int i = 0; i < cases; ++i) {
    int kids = 0;
    cin >> dif_candies >> min_candies;

    for (int j = 0; j < dif_candies; ++j) {
      cin >> amount_candies;
      kids += amount_candies / min_candies;
    }

    cout << kids << endl;
  }

  return 0;
}