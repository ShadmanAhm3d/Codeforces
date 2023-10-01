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



const int N = 1e5+10;
int n , cows;
int positions[N];

bool canPlaceHere( ll thedistance){

  ll funcCows = cows;
  ll lastpos = -1;
  for(int i=0 ; i < n ; i++){
    if(positions[i]-lastpos >= thedistance || lastpos == -1){
      lastpos = positions[i];
      funcCows--;
    }

    if(funcCows == 0){
      break;
    }
  }

  return funcCows==0;
}
int main(){
  int tc ; cin >> tc;
  while(tc--){
    cin >> n >> cows ;
    for(int i=0 ; i< n; i++){
      cin>>positions[i];
    }
    
    sort(positions,positions+n);
  
    ll l = 0 ; ll r = 1e9; ll m ;

    while(r-l > 1){
       m = ( l +r)/2;
      if(canPlaceHere(m)){
        l = m ;
      }else{
        r=m;
      }


    }

      if(canPlaceHere(r))
        cout << r <<endl;
      else
        cout << l << endl;
  }

 return 0;
}
