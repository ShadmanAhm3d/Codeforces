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
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main() {

  int tc;
  cin >> tc;
  while (tc--) {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) { // Change loop bounds
      int elem;
      cin >> elem;
      arr[i] = elem;
    }

    int maj = 0;
    for (int i = 1; i < n; i++) { // Change loop bounds
      if (arr[i] == arr[i - 1]) {
        maj = arr[i];
      }
    }
    if(maj == 0){
      maj = arr[n-1];
    }

    for (int i = 0; i < n; i++) { // Change loop bounds
      if (arr[i] != maj) {
        cout << i + 1 << endl; // Adjust the index to print the position starting from 1
      }
    }
  }

  return 0;
}
