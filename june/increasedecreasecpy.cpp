#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int n, m;
  cin >> n;
  vector<int> a(n, 0);
  vector<int> b(n + 1, 0);
  for (auto &i : a)
    cin >> i;
  for (auto &i : b)
    cin >> i;

  /*
  4
  4 2 1 2
  2 1 5 2 3
  */
  int x = b[n];
  int mini = INT_MAX;
  for (int i = 0 ; i< n ;i++){
    int p = abs(x - a[i]);
    if( p < mini){
      mini = p ;
    }
  }

  int ans = 0;
   ans += mini;

  for(int i=0; i<n; i++){
    ans+= abs(a[i] - b[i]);
  }
  ans+= abs(b[n] - a[n-1]);
  
  if(ans == 0) ans++;
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
