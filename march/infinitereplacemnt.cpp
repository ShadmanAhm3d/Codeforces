#include <cmath>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int power(int a,int n,int m=mod){
   n = m-2;
   int res = 1;
   while(n){
      if(n&1){
         res=(res*a)% m;
      }
      n>>=1;
      a = (a * a) %m ;
   }
   
   return res;

}

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    string s, t;
    cin >> s >> t;

    int acount = 0;
    int notacout = 0;
    for (int i = 0; i < t.size(); i++) {
      if (t[i] == 'a') {
        acount++;
      }else{
	notacout++;
      }
    }

    int size = t.size();

    if (t == "a") {
      cout << 1 << endl;
    } else if (t.size()>1 && acount >=1) {
      cout << -1 << endl;
    } else {
      ll ans = pow(2LL, s.size());
      cout << ans << endl;
    }
  }

  return 0;
}
