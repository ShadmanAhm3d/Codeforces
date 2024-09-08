#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  if( ( a+b >= n-1)){
     if(a == n && b == n){
       cout << "Yes\n";
      return ;
    }else{
      cout << "No\n";
    }
  }else{
      cout << "No\n";
  }
  
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
