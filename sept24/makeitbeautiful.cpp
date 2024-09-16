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
  vector<int> arr(n, 0);

  for (auto &i : arr)
    cin >> i;

  // 10 10

  if (arr.size() == 2 && arr[0] == arr[1]) {
    cout << "NO\n";
    return;
  }

  bool dikkathai = false;
  // 1 2 3 4 5
  int pref = 0;
  int j = 0;
  int i = 0;
  int p = 0;
  for (i = 0; i < n; i++) {
    p = i;
    if (arr[i] == pref) {
      // head towards right of the array and find the largest element
      dikkathai = true;
      int maxi = arr[i];
      while (i < n) {
        if (arr[i] > maxi) {
          maxi = arr[i];
          j = i;
        }
        i++;
      }
    }

    if (i < n) {
      pref += arr[i];
    }
  }

  // replace p index with j;

  if (dikkathai == true) {
    swap(arr[p], arr[j]);
  }

  cout << "Yes\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n";
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
