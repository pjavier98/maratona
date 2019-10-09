#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
typedef pair <lli, lli> ii;
typedef vector <lli> vi;
typedef vector <ii> vii;
typedef vector <vi> vvi;

int main() {
  lli index;
  int cases, candidates, voters, preference;

  cin >> cases;

  for (int c = 0; c < cases; ++c) {
    vvi candidates_votes;
    vii votes;
    ii last, penultimate;

    cin >> candidates >> voters;
    candidates_votes.resize(voters);
 
    for (int j = 0; j < voters; ++j) {
      for (int k = 0; k < candidates; ++k) {
        cin >> preference;
        candidates_votes[j].push_back(preference);
      }
    }

    votes.resize(candidates + 1);
    for (int i = 1; i < votes.size(); ++i) {
      votes[i] = make_pair(0, i);
    }

    for (int i = 0; i < candidates_votes.size(); ++i) {
      index = candidates_votes[i][0];
      votes[index].first += 1;
    }
    
    sort(votes.begin(), votes.end());

    last = votes[votes.size() - 1];
    if (last.first > (voters / 2.0)) {
      cout << last.second << " " << 1 << endl;
    } else {
      penultimate = votes[votes.size() - 2];

      for (int i = 0; i < candidates_votes.size(); ++i) {
        for (int j = 0; j < candidates_votes[i].size(); ++j) {
          index = candidates_votes[i][j];
          if (index == last.second) {
            last.first += 1;
            break;
          } else if (index == penultimate.second) {
            penultimate.first += 1;
            break;
          }
        }        
      }
      if (last.first > penultimate.first) {
          cout << last.second << " " << 2 << endl;
        } else {
          cout << penultimate.second << " " << 2 << endl;
        }       
      }
    }
  return 0;
}
