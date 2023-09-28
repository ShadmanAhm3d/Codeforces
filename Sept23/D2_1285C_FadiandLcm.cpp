#include <climits>
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

ll lcm ( ll a , ll b){

  return a / __gcd(a,b) * b;
}


int main(){
      ll x ;cin >>x;

   ll ans = LLONG_MAX; 
  for(ll i=1 ; i*i <= x ; i++){
    if( x % i ==0 && lcm(i , x/i)==x){
      ans = i ;
    }
  }

  cout << ans  << " " << x/ans << endl; 

 return 0;
}
