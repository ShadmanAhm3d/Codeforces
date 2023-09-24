#include <unordered_map>
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
  int t;
  cin >> t;
  while (t--) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < v.size(); i++) {
    int elem;
    cin >> elem;
    v[i] = elem;
  }
  unordered_map<int, int> umap;
  for (auto &i : v) {
    umap[i]++;
  }

  int distinct = umap.size();
  int most = 0;
  for (auto i : umap) {
    most = max(i.second, most);
  }
  int ans = min(most, distinct);

  if (most == distinct) {
    ans--;
  }
  cout << ans << endl;
  }

  return 0;
}
