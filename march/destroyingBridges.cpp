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
     int n ,k;
    cin >> n >> k;

    if( k >= (n-1)){
      cout <<1 <<endl;
    }else{
      cout << n <<endl;
    }
  }

 return 0;
}
