#include <numeric>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;




int main(){

  int tc ; cin >> tc;
  while(tc--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &i: arr) cin>> i;

    ll current =0;
    ll lss = 0;

    //short kadane
    for(auto &it : arr){
      current+=it;
      lss = max(current,lss);
      current = max(current,0ll);
    }

    //int finale = (accumulate(arr.begin(),arr.end(),0) % mod + mod) % mod;
    ll finale = (accumulate(arr.begin(), arr.end(), 0ll) % mod+mod) % mod;
    for(int i=0;i<k;i++){
      finale = (finale+lss)%mod;
      lss = (lss*2)%mod ;
    }

    cout << finale << endl;

  }

 return 0;
}
