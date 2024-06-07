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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    for (auto &i : a)
      cin >> i;
    for (auto &i : b)
      cin >> i;

    int m;
    cin >> m;
    vector<int> mods(m, 0);
    for (auto &i : mods)
      cin >> i;

    // dj mein mila then fine

    bool allfound = true;
    
    int  x =a.size();
    int  y =b.size();
    int z = mods.size();
    int i;
    for (i = 0; i <z ; i++) {
      // if not found in b array then break loop
      bool x = false;
      for (int k = 0; k < y; k++) {
        if (b[k] == mods[i]) {
          x = true;
          break;
        }
      }

      if (x == false) {
        allfound = false;
        break;
      }
    }


    if (allfound == true) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
