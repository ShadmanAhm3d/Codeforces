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
using namespace __gnu_pbds;

template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    int X, K;
    cin >> X >> K;
    // trial div prime fact ;

    vector<ll> ans;
    for (int d = 2; d * d <= X; d++) {
      while (X % d == 0) {
        ans.push_back(d);
        X /= d;
      }
    }
    if (X > 1) {
      ans.push_back(X);
    }

/* cout << endl ;
  for(auto i : ans){
    cout << i << " ";
  }
cout << endl ; */
    if (K > ans.size()) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  }

  return 0;
}
