#include <bits/stdc++.h>

using namespace std;

int main() {
  int cases, amount_words;
  string word;
  vector <string> vstr;

  cin >> cases;
  
  for (int i = 0; i < cases; ++i) { 
    int index = -1;
    string english_word;
    cin >> amount_words;
    vstr.resize(amount_words); 
    for (int j = 0; j < amount_words; ++j) {
      cin >> word;
      if (word[0] != '#') {
        english_word.append(word);
        index = j;
      } else {
          if (index == -1) {
          vstr[j].append(word);
        } else {
          cout << word << ' ';
        }
      }
    }

    if (index == -1) {
      for (int j = 0; j < vstr.size(); ++j) {
        cout << vstr[j] << ' ';
      }
    } else {
      cout << english_word << ' ';
      for (int j = 0; j < index; ++j) {
        cout << vstr[j] << ' ';
      }
    }

    vstr.clear();
    cout << endl;
  }

  return 0;
}