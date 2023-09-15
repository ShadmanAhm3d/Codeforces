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
  int year;
  cin >> year;
  for (int i = year + 1;; i++) {
    int a = i / 1000;
    int b = i / 100 % 10;
    int c = i / 10 % 10;
    int d = i % 10;

    if (a != b && a != c && a != d && b != c && b != d && c != d) {
      cout << i;
      return 0;
    }
  }

  return 0;
}
