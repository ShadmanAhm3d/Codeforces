#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<char> arr(12 + 1, 0);
  arr[a] = 'r';
  arr[b] = 'r';
  arr[c] = 'b';
  arr[d] = 'b';

  string s = "";
  for (int i = 1; i <= 12; i++) {
    if(i == 'r' )
    
  }
  cout << "NO\n";
}

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
