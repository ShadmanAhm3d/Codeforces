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

template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++) {
      int elem;
      cin >> elem;
      arr[i] = elem;
    }

    set<ll> s;
    ll sum = 0;
    ll i = 1;
    while (i <= n) {
      if (arr[i] < 0) {
        while (arr[i] < 0 && i <= n) {
          s.insert(arr[i]);
          i++;
        }
      } else {
        while (arr[i] > 0 && i <= n) {
          s.insert(arr[i]);
          i++;
        }
      }

      auto it = s.rbegin();
      sum += *it;
      s.clear();
    }

    cout << sum << endl;
  }
}
