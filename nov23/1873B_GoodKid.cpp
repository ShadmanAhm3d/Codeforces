#include <algorithm>
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
    vector<int>v(n);
    for(auto& i : v) {
      cin >> i;
    }

    sort(v.begin(),v.end());

    v[0]+=1;


    int res = 1;
    for(int i=0 ; i < v.size() ; i++){
      res = res*v[i];
    }

    cout << res << endl;

  }

 return 0;
}
