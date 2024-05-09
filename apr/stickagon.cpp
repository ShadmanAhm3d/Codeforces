#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      int elem;
      cin >> elem;
      arr[elem]++;
    }

    int count = 0;
    int x = arr.size();
    for (int i = 0; i < x; i++) {
      if (arr[i] >= 4) {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
