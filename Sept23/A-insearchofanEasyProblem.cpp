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
  int p;
  cin >> p; // number of poeple

  int arr[p];
  for (int i = 0; i < p; i++) {
    int elem;
    cin >> elem;
    arr[i] = elem;
  }

  for (auto i : arr) {
    cout << i;
  }
  cout << endl;
  bool flag = false;
  for (int i = 0; i <= p; i++) {
    if (arr[i] == 1) {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";

  return 0;
}
