#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  std::vector<int> arr(n, 0);
  vector<int> freq(128, 0);
  for (auto &i : arr)
    cin >> i;

  std::map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  if (mp.size() >= 3) {
    cout << "NO\n";
    return;
  } else {
    if (abs(mp.begin()->second - mp.rbegin()->second )<= 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return;
}

int main() {
   int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
