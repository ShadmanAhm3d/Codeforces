#include <cctype>
#include <unordered_map>
#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    /*
        vector<char> vec(n);
        for (int i = 0; i < n; i++) {
          cin >> vec[i];
        }

        unordered_map<char, int> small;
        unordered_map<char, int> big;

        // a  96 z 122
        // A 65 Z 97

        for (int i = 0; i < n; i++) {
          if (vec[i] >= 65 && vec[i] <= 90) {
            big[vec[i]]++;
          } else {
            small[vec[i]]++;
          }
        }

        int hurl = 0;

        for (auto itr = small.begin(); itr != small.end(); itr++) {
          char c = itr->first;

            auto big_itr = big.find(toupper(c));
            if (big_itr != big.end()) {
          while (itr->second >= 1) {
              hurl++; // Increment hurl when the character is found in 'big'
              big_itr->second--; // Decrement the value of the second element

              if (big_itr->second < 1) {
                break;
              }
            itr->second--;
            }
          }
          if (itr->second < 1) {
            small.erase(itr->second);
          }
        }

         for (auto itr = small.begin(); itr != small.end(); itr++) {
          cout << itr->first << "  " << itr->second << endl;
        }

        cout << "SECOND " << endl;
        for (auto itr = big.begin(); itr != big.end(); itr++) {
          cout << itr->first << "  " << itr->second << endl;
        } */

    /* for(auto itr=small.begin();itr!=small.end();itr++){
      if(itr->second >=2 && k>=1){
        hurl++;
        itr->second--;
        k--;
      }
    }
    for(auto itr=big.begin();itr!=big.end();itr++){
      if(itr->second >=2 && k>=1){
        hurl++;
        itr->second--;
        k--;
      }
    }

    cout << hurl <<endl; */

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> small(26, 0);
    vector<int> big(26, 0);
    for (auto &i : s) {
      if ('A' <= i && 'Z' >= i)
        big[i - 'A']++;
      else
        small[i - 'a']++;
    }

    int answer = 0;
    for (int i = 0; i < 26; i++) {
      int pairs = min(small[i], big[i]);
      answer += pairs;
      small[i] -= pairs;
      big[i] -= pairs;
      int add = min(k, max(small[i], big[i]) / 2);
      k -= add;
      answer += add;
    }

    cout << answer << endl;
  }

  return 0;
}
