#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;



void solve(){
  string s ;cin >> s;
  int n = s.length();
  if( n <=1){
    cout << "NO" <<endl;
    return;
  }
  for(int i=1; i< n ; i++){
    if(s[i]!=s[i-1]){
      char t = s[i];
      s[i] = s[i-1];
      s[i-1]=  t;
      cout << "yes\n";
      cout << s << endl;
      return;
    }
  }
  cout << "NO\n";
}

int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
