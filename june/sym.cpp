#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <map>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); // Faster input/output
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string org = s;
    string distinct = "";

    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
      if (i == 0 || s[i] != s[i - 1]) {
        distinct += s[i];
      }
    }

    // cout << "Distinct: " << distinct << endl;

    map<char, char> mp;
    int sizes = distinct.size();
    for (int i = 0; i < sizes; i++) {
      char z = distinct[i];
      mp[z] = distinct[sizes - i - 1];
    }

    /* cout << "Map contents:" << endl;
    for (const auto& entry : mp) {
        cout << entry.first << " -> " << entry.second << endl;
    } */

    s= "";
    for (int i = 0; i < org.size(); i++) {
      char key = org[i];
      auto it = mp.find(key);

        char x = it->second;
        s+=x;
    }

    cout << s << endl;
  }

  return 0;
}

