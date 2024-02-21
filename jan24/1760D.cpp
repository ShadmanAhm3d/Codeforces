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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    int dec = 0;
    int increm = 0;

    bool flag = true;
    for (int i = 1; i < n; i++) {
      if (v[i] > v[i - 1]) {
        increm++;
      } else if (v[i] < v[i - 1]) {
        dec++;
        if (increm > 0) {
          flag = false;
          break;
        }
      }
    }

    if (flag == true) {
      cout << "YES";
      cout << endl;
    } else {
      cout << "NO";
      cout << endl;
    }
  }

  return 0;
}
