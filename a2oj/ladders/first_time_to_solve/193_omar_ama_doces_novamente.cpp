#include <bits/stdc++.h>

using namespace std;

int main() {
  vector < pair < char, int > > candies_type;
  candies_type.resize(26);

  int cases;
  cin >> cases;

  string candies;
  for (int i = 0; i < cases; ++i) {
    cin >> candies;

    for (int j = 0; j < candies.size(); ++j) {
      int index = (candies[j] - 97);

      candies_type[index].first = candies[j];
      candies_type[index].second += 1;
    }

    pair < char, int > res;
    res.second = 0;

    for (int k = 0; k < candies_type.size(); ++k) {
      pair < char, int > aux;
      aux = candies_type[k];
      if (aux.second > res.second) {
        res.second = aux.second;
        res.first = aux.first;
      }
    }

    cout << res.second << " " << res.first << endl;
    candies_type.clear();
    candies_type.resize(26);
  }

  return 0;
}