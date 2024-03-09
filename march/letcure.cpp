#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> ms(m);
    for (int i = 0; i < m; i++) { // Fix: Start from 0, not 1
      string s, t;
      cin >> s >> t;
      ms[i] = make_pair(s, t);
    }

    vector<string> actual(n);
    for (int i = 0; i < n; i++) { // Fix: Start from 0, not 1
      string s;
      cin >> s;
      actual[i] = s;
    }


    for (int i = 0; i < n; i++) { // Fix: Start from 0, not 1
      string st = actual[i];
      for (int j = 0; j < m; j++) {
        if (st == ms[j].first || st == ms[j].second) {
          if (ms[j].first.length() <= ms[j].second.length()) {
            cout << ms[j].first << " ";
          } else if (ms[j].first.length() >= ms[j].second.length()) {
            cout << ms[j].second << " ";
          } else {
            cout << ms[j].second << " ";
          }
          break; 
        }
      }
    }
    cout << endl;

  return 0;
}

