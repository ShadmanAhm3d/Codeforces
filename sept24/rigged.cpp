#include <utility>
#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> vp;
  int indexOF = 0;
  int i;
  for (i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    vp.push_back(make_pair(a, b));
  }

  for (int i = 1; i < n; i++) {
    if (vp[i].first >= vp[0].first && vp[i].second >= vp[0].second) {
      cout << "-1" << endl;
      return;
    }
  }

  cout << vp[0].first << endl;

  return;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
