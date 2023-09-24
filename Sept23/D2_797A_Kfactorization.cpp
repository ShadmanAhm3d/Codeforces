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
      ll  n ; cin >> n;
     int k ; cin >> k;

     //first find the factors n ; using primefactorization of trialdivision
  vector<ll>primes;
    for( int i=2 ; i*i <= n ; i++){
      while(  n % i == 0){
      primes.push_back(i);
      n/=i;
    }

  }
  if(n > 1 ){
  primes.push_back(n);
  }
  if( k > primes.size()){
    cout << -1;
    return 0;
  }

  int producc =1;
  for(ll i=primes.size()-1;i>=k-1;i--){
     producc *= primes[i];
   } 

  for( ll i = 0 ; i< k-1 ; i++){

      cout << primes[i] << " ";
  }

  cout << producc;
 return 0;
}
