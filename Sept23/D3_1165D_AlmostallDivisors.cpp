#include <algorithm>
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
  int tc;
  cin >> tc;
  while (tc--) {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll lastelem = arr[0] * arr[n - 1];
    vector<ll> b;

    for (ll i = 2; i <= sqrt(lastelem); i++) {
      if (lastelem % i == 0) {
        b.push_back(i);
        if (i != (lastelem / i)) {
          b.push_back(lastelem / i);
        }
      }
    }

    sort(b.begin(), b.end());
    if(arr == b){
      cout << lastelem <<endl;
    }else{
      cout << -1 << endl;
    }
  }

  return 0;
}
