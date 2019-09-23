#include <bits/stdc++.h>

using namespace std;

int main() {
  int amount;
  cin >> amount;

  int num1, num2;
  for (int i = 0; i < amount; ++i) {
    cin >> num1 >> num2;
    cout << (num1 + num2) << endl;
  }
  return 0;
}