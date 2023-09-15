#include <cmath>
#include <filesystem>
#include <valarray>
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

int main(){
     int tc ; cin >> tc ;

  
  while(tc--){
  int n  ; cin >> n;
  int arr[n];
  for( int i=0 ; i < n ; i++){
    int elem ; 
    cin >> elem ;
    arr[i] = elem;
  }

    int operationresult = 0;
    int odd = 0;
    if( n &  1){
     operationresult = -1; 
    }else if ( n % 2 == 0){

    for( int i=0 ; i < n ; i++){
      //if elem is odd 
      if(arr[i] %  2){
        odd++;
      }
    }
    operationresult = abs( n/2 - odd);
    }

   cout << operationresult << '\n';
  }



}

