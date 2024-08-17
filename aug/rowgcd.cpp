#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

ll gcdd(ll a, ll b) {
  if (b == 0)
    return a;


  return gcdd(b, a % b);
}
void solve() {
  ll n, m;
  cin >> n >> m;

  ll a[n];
  ll b[m];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  ll remGCD = 0;

  for (int i = 1; i < n; i++) {
    remGCD = gcdd(remGCD, abs(a[i] - a[0]));
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans = gcdd(a[0] + b[i], remGCD);
  }

  cout << ans << " ";
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
