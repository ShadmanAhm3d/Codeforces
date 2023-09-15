#include <numeric>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

bool checker(int n){

  if ( n ==1 ) return false;

  for(int i=2 ; i<=n/2 ; i++){

    if(n % i == 0) return false;
  }
  return true;
}

void printPrimes(int n){

  bool isPrime;

    isPrime = checker(n);
    if(isPrime){
      cout <<"YES";
    }else{
      cout << "NO";
    }
  }
int main(){

  int n ; cin >> n;

  printPrimes(n);


 return 0;
}

