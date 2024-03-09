#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

bool recur(int n, int m) {
  if (n == m) {
    return true;
  } else if (n % 3 != 0) {
    return false;
  } else {
    return (recur(n / 3, m) || recur(2 * n / 3, m));
  }
}

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;

    // 9 4 -> 6,3 -> 2,4,3
    // lets talk about when i cant do that

    bool res = recur(n, m);

    if (res == true) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
