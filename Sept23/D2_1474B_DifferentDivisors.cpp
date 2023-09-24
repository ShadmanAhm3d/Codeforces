#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;

vector<ll> v;
void SieveOfEratosthenes(ll n) {
  vector<int> isPrime(n + 1, true);

  for (int i = 2; i * i <= n; i++) { // Fix: Change i < n to i <= n
    if (isPrime[i] == true) {
      for (int j = i * i; j <= n; j = j + i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      v.push_back(i);
    }
  }
}

template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
  int tc;
  cin >> tc;
  ll n = 1000000; // Define n here
  SieveOfEratosthenes(n);
  while (tc--) {

    ll d;
    cin >> d;

    ll ans = 1;
    ll j = 1;
for (ll i = 0; i < v.size();i++) {

      if (v[i] - 1 >= d) {
        ans *= v[i];
        j = v[i];
        break;
      }
    }

for (ll i = 0; i < v.size();i++) {

      if (v[i] - j >= d) {
        ans *= v[i];
        j = v[i];
        break;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
