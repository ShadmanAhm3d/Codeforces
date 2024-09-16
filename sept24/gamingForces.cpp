
#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  int counter1 = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 1) {
      counter1++;
    }
  }

  int ans = (counter1 + 2 - 1) / 2;
  ans += (n - counter1);

  cout << ans << endl;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
