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
    ll r, c;
    cin >> r >> c;
    ll ans = 0;
    if (r > c) {
      // find diagonal first
      ll diagonal = r * r - (r - 1);
      if (r % 2 == 0) {
        // even
         ans = diagonal + (r - c);

      } else {
         ans = diagonal - (r - c);
      }
    }
    if (r < c) {
      // find diagonal first
      ll diagonal = c * c - (c - 1);
      if( c % 2 == 0){
         ans = diagonal - (c -r);
      }else{
        ans = diagonal + (c -r);
      }
    }

    if (r == c) {
       ans =r * r - (r - 1);
    }
    cout << ans << endl;
  }

  return 0;
}
