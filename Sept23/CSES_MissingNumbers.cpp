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

int main(){
      ll n ;cin >>n;
  ll sum_calculated =0;
  for(ll i=1,k ; i< n ;i++){
    cin >> k;
    sum_calculated+=k;
  }
  ll totalsum = n*(n+1)/2;
  cout << totalsum-sum_calculated ;

  
 return 0;
}
