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
    int k , n ; cin >> k >> n;

    int j = 1 ;
    int difference = 1;

    for(int i=1 ; i <= k ; i++){
      cout << j << " " ;
      if(n-(j+difference) >= (k-i+1)){
        j+=difference ;
        difference++;
      }else{
        j++;
      }
    }
    cout << endl;
  }

 return 0;
}
