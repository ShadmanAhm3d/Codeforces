#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {

  int n; cin >> n;
  vector<int> a(n, 0);
  vector<int> b(n, 0);
  for (auto &x : a)
    cin >> x;
  for (auto &x : b)
    cin >> x;

  int count = 0;
  for (int i = 0; i < n; i++) {


  }

  cout << count / 2 << endl;
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
