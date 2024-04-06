#include <unordered_map>
#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &i : vec)
      cin >> i;

    unordered_map<ll, ll> mp;
    ll mex = 0;
    int i = 0;
    while (i < 1e5 + 5) {
      if (mp[i] == 0) {
        mex = i;
        break;
      }
      i++;
    }

    if(mex ==0){
      cout<<"2\n";
      cout<<"1 1\n";
      cout<<"2 " << n<<endl;
      continue;
    }
    mp.clear();
    vector<pair<ll,ll>>ans;

    ll leftitr =0;
    for(ll i=0;i<n;i++){
      if(vec[i]<mex){
        mp[vec[i]]=1;
      }
      if(mp.size() == mex){
        ans.push_back({leftitr+1,i+1});
        leftitr = i+1;
        mp.clear();
      }
    }

    ans[ans.size()-1].second=n;
    if(ans.size() < 2){
      cout << "-1\n" ;
    }else{
      cout <<ans.size()<<"\n";
      for (ll i =0; i <ans.size(); i++) {
        cout<<ans[i].first << " " <<ans[i].second<<"\n";
      
      }
    }


  }

  return 0;
}
