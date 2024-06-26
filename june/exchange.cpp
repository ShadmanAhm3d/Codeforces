#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
   int n ,a, b; cin >> n >> a >> b;
    
  int count  =0 ;
  count  = (n+a-1)/a;

  if( a > b) {
    count = 1;
  }

  cout << count << endl;

}


int main(){

  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
