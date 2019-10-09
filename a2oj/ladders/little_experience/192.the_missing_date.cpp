#include <bits/stdc++.h>

using namespace std;

int main() {
  int cases;
  int year, month, years_old, month_old;
  cin >> cases;

  for (int i = 0; i < cases; ++i) {
    cin >> year >> month;
    cin >> years_old >> month_old;

    int current_year = year + years_old + ((month + month_old) / 12);
    int current_month = (month + month_old) % 12;
    if (current_month == 0) {
      current_month = 12; 
      current_year -= 1;
    }
    cout << current_year << ' ' << current_month << endl;
  }
}
