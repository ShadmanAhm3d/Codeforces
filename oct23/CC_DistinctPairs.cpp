#include <utility>
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


  int n, m;
  cin >> n >> m;
//take inputs in pairs with arr1 elem 1 to arr2s elems and then m-1 elems to arr1 elems
  pair<int, int> arr1[n];
  pair<int, int> arr2[m];

  for (int i = 0; i < n; i++) {
    cin >> arr1[i].first;
    arr1[i].second = i;
  }

  for (int i = 0; i < m; i++) {
    cin >> arr2[i].first;
    arr2[i].second = i;
  }

  sort(arr1, arr1 + n);
  sort(arr2, arr2 + m);

  for (int i = 0; i < m; i++) {
    cout << arr1[0].second <<" " <<  arr2[i].second << endl;
  }
  for (int i = 1; i < n; i++) {
    cout  << arr1[i].second<< " " << arr2[m-1].second  << endl ;
  }

  return 0;
}
