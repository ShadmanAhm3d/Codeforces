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

    string s;
    cin >> s;

    int i = s.find("11");
    int j = s.rfind("00");

    cout <<( i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;

  }
  return 0;
}
