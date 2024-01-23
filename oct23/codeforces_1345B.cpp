#include <algorithm>
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

const ll N = 1e9; // Change to 'll' type

void solve() {
  ll n;
  cin >> n;
  vector<ll> v;

  v.push_back(2);
  ll h = 2;

    // iterating with while loop results in less TC ;

  while (1) {
    ll value = v.back() + (h * 2 + (h - 1));
    v.push_back(value);
    h++;
    if (value > N) {
      break;
    }
  }
  ll count = 0;

  while (1) {
    // 0 2 7 15 26 40
    // 0 1 2  3  4  5
    if (n < 2) {
      break;
    }
    ll it = (lower_bound(v.begin(), v.end(), n) - v.begin());

    if (v[it] > n) {
      it--;
    }
    n -= v[it];
    count++;
  }
  cout << count << endl;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
  return 0;
}
