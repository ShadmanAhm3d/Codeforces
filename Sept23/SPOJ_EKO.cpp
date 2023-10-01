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


const long long N = 1e6+10;
ll n ;
ll trees[N];
long long requiredwoods ; 

// basically this problem teaches how to use binary search acccording to yourneed , with the help of predicate function , Predicate functions can be anything which satisfies your need 

bool cuttrees(int heightofBlade){

  ll wood = 0;
  for (ll i = 0; i < n; i++) {
    if(trees[i] >= heightofBlade ) {
      wood+=(trees[i]-heightofBlade);
    }
  }

  return wood>=requiredwoods;
}



int main(){
      cin >> n >> requiredwoods;

  for(ll i =0 ; i < n ; i++){
    cin>> trees[i];
  }


  ll low =0  ; ll high = 1e9; ll mid ;

  while(high - low > 1){
    mid = (low + high)/2;
    if(cuttrees(mid)){
      low = mid; 
    }else{
      high=  mid -  1;
    }
  }

  if(cuttrees(high))
    cout << high;
  else
    cout <<low;



 return 0;
}
