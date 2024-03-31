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

  int n, m;
  cin >> n >> m;
  int result = -1;
  if (m % n == 0) {
    result = 0;
    int d = m / n;
    while (d % 2 == 0)
      d /= 2, result++;
    while (d % 3 == 0)
      d /= 3, result++;
    if (d != 1)
      result = -1;
  }
  cout << result << endl;

  return 0;
}
