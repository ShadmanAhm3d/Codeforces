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

void solve() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int counter = 0;
  ;
  for (int i = 0; i < n; i++) {

    if (arr[i] < arr[i + 1]) {
      counter++;
    }
  }

  if (counter == 0) {
    cout << n * 2 << endl;
  } else {
    cout << counter;
  }
}

int main() {

    solve();

  return 0;
}
