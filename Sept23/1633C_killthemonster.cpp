/* #include <bits/stdc++.h>
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

    int hc, dc, hm, dm;
    cin >> hc >> dc >> hm >> dm;
    int k, w, a;
    cin >> k >> w >> a;

    // w is related to dc and a is related to hc;
    if (k == w) {
      dc += w;
      k = 0;
    } else if (k == a) {
      hc += a;
      k = 0;
    } else if (k % 2 == 0) {
      int half = (k / 2);
      hc = hc + (a * half);
      dc = dc + (w * half);
    } else if (k > w || k > a) {
      // find max of w and a and assign accordingly
      if (w > a) {
        dc += w;
        k = 0;
      } else {
        hc += a;
        k = 0;
      }
    }

    // Simulate the fight
    while (hc > 0 && hm > 0) {
      // Character attacks monster
      hm -= dc;
      if (hm <= 0) {
        cout << "YES" << endl;
        continue;
      }

      // Monster attacks character
      hc -= dm;
      if (hc <= 0) {
        cout << "NO" << endl;
        continue;
      }
    }
  }
  return 0;
}
*/

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

    ll hc, dc, hm, dm;
    cin >> hc >> dc >> hm >> dm;
    ll k, w, a;
    cin >> k >> w >> a;

    int flag = 0;
    for (ll i = 0; i <= k; i++) {

      // current combination for optimatal checking
      ll ca = i;
      ll ch = k - i;

      ll nA = dc + (ca * w);
      ll nH = hc + (ch * a);

      ll monsterturns, characterturns;
      if (nH % dm == 0)
        monsterturns = nH / dm;
      else
        monsterturns = nH / dm + 1;
      if (hm % nA == 0)
        characterturns = hm / nA;
      else
        characterturns = hm / nA + 1;
      if (characterturns <= monsterturns) {
        flag = 1;
        break;
      }
    }

    if (flag) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
