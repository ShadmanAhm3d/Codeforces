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
  ll n;
  cin >> n;
  ll arr[n];
  // take ip
  for (ll i = 0; i < n; i++) {
    ll elem;
    cin >> elem;
    arr[i] = elem;
  }

  ll count = 0;
  /* for (ll i = 1; i < n; i++) {
    while(arr[i] < arr[i - 1]) {
      arr[i] = arr[i] + 1;
      count++;
    }
  } */

  for (ll i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {
      continue;
    } else {
      count += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }

  cout << count;
  return 0;
}
