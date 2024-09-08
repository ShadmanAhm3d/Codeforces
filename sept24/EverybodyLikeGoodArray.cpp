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

  int ans = 0;

  for (int i = 1; i < n; i++) {
    //run of eeee oooo
    if(arr[i]%2 ==0 && arr[i-1]%2 == 0){
      ans+=1;
    }
    if(arr[i]%2 !=0 && arr[i-1]%2 != 0){
      ans+=1;
    }

  }

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
