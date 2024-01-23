#include <cstdint>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
#define int long long
using namespace std;




int power(int a,int n,int m=MOD){
   int res = 1;
   while(n){
      if(n&1){
         res=(res*a)% m;
      }

      n>>=1;
      a = (a * a) %m ;
   }

   return res;

}

int modinverser(int n , int m = MOD){
   return power(n,m-2);

}

int32_t main(){

  int tc ; cin >> tc;
  while(tc--){
    int a ,b; cin >> a>> b;
    int res =power(a,b);
    cout << res << endl;
  }

 return 0;
}
