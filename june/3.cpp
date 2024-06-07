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

void solve() {

  int n;
  cin >> n;
  vector<int> a(n, 0);
  vector<int> b(n, 0);

  for (auto &i : a)
    cin >> i;

  for (auto &i : b)
    cin >> i;

  int m; cin >> m;
  vector<int> md(m, 0);
  for (auto &i : md)
    cin >> i;

  map<int, int> extra;

  for (int i = 0; i < m; i++) {
    extra[md[i]]++;
  }

  bool ok = false;
  for (int i = 0; i < n; i++) {
    if (b[i] == md[m - 1])
      ok = true;
    if (b[i] != a[i]) {
      // ab kya kare>?? ?
      if (extra[b[i]] > 0) {
        extra[b[i]]--;
        if (extra[b[i]] == 0) {
          extra.erase(b[i]);
        }
      } else {
        cout << "NO" << endl;
        return;
      }
    }
  }

  if (extra.size() > 0 && ok == false) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}
int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
