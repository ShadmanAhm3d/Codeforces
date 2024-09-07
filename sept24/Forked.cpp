#include <utility>
#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

// 249981878
void solve() {
  int a, b, xk, yk, xq, yq;
  cin >> a >> b >> xk >> yk >> xq >> yq;

  vector<pair<int, int>> directions = {
    {a, b},
    {a, -b},
    {-a, b},
    {-a, -b},
    {b, a},
    {b, -a},
    {-b, a},
    {-b, -a}
  };

  set<pair<int,int>> st1,st2;

  for (auto d : directions) {
    int x = xk+ d.first;
    int y = yk+ d.second;


    st1.insert(make_pair(x, y));

    x = xq + d.first;
    y = yq + d.second ;
  
    st2.insert(make_pair(x, y));
  }


  int ans =0 ;


  for(auto pos : st1){
    if(st2.find(pos)!=st2.end()){
      ans++;
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
