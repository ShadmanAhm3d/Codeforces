#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int x, y, z, k;
  cin >> x >> y >> z >> k;
  long long ans = 0;

  for (ll a = 1; a <= x; a++) {
    for (ll b = 1; b <= y; b++) {
      ll flag1 = 0;
      ll flag2 = 0;

      if (k % (a * b) == 0) {
        flag1 = 1;
      }
      if (k / (a * b) <= z) {
        flag2 = 1;
      }

      if (flag1 && flag2) {
        ll s1 = a;
        ll s2 = b;
        ll s3 = k / (a * b);

        ll dp = (x - s1 + 1);
        dp *= (y - s2 + 1);
        dp *= (z - s3 + 1);

        ans = max(ans, dp);
      }
    }

    cout << ans << endl;
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
