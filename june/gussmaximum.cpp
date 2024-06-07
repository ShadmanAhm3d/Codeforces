#include <vector>
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
     
    int n ;cin >> n;
    vector<int>arr(n,0);
    for(auto &i: arr) cin >> i;

    int res=1e9;
    for(int i=0; i<n-1;i++){
      int x = max(arr[i],arr[i+1]);
      res = min(x,res);
    }

    cout << res-1 << endl;

  }

 return 0;
}
