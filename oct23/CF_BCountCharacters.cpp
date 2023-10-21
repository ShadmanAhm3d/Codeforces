#include <unordered_map>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

void solve(){
  map<char, int> mp;
  string ans = "";
  cin >> ans;
  for (auto x : ans) {
    mp[x]++;
  }
   
  for(auto x : mp){
    cout << x.first << " " <<x.second <<endl;
  }
   

}


int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
