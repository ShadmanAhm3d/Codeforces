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
  string s;
  cin >> s;

  int zerothIndex = 0;
  bool checker = true;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      checker = false;
      zerothIndex = i;
    }
  }

  if (n == 4 && checker == true) {
    cout << "Yes\n";
    return;
  }

  // matlab size > 4 and may contain zeros

  int r = zerothIndex - 1;
  if ((r * r) == n) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
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
