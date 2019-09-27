#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vint;
typedef vector <vint> vvint;

int check_limits(int x, int y, int row, int column) {
  if (x < 0 || y < 0 || x >= row || y >= column) {
    return 0;
  }
}

int verify_univ(vvint matrix) {
  int dif_univ = 0;
  vint visited;
  vint axis_x = {-1, -1, 0, 1, 1, 1, 0, -1};
  vint axis_y = {0, 1, 1, 1, 0, -1, -1, -1};
  
  visited.resize(100, 0);

  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix[i].size(); ++j) {
      for (int k = 0; k < 8; ++k) {
        dif_univ += check_limits();
      }
    }
  }
  
}

int main() {
  vvint matrix; 
  int cases, row, column, num;
  cin >> cases;

  for (int i = 0; i < cases; ++i) {
    cin >> row >> column;
    matrix.resize(row);

    for (int j = 0; j < column; ++j) {
      for (int k = 0; k < row; ++k) {
        cin >> num;
        matrix[k].push_back(num);
      }
    }
    
    verify_univ(matrix);

    matrix.clear();
  }

  return 0;
}