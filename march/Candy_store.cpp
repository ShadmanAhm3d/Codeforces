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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i] >> b[i];
    int ans = 0;
    for (int i = 0; i < n;) {
      int gcd = a[i] * b[i];
      int lcm = b[i];
      i++;

      while (i < n) {
        gcd = __gcd(gcd, a[i] * b[i]);
        lcm = lcm * b[i] / __gcd(lcm, b[i]);
        if (gcd % lcm == 0)
          i++;
        else
          break;
      }
      ans++;
    }
    cout << ans << endl;
  }

  return 0;
}
