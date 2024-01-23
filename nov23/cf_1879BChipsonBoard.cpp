#include <algorithm>
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

  ll tc ; cin >> tc;
  while(tc--){
    ll sum1 =0 ;
    ll sum2 =0 ;
    ll n ;
    cin >> n ;

    vector<ll>a(n),b(n);
    for(ll i=0 ; i < n ; i++){
      cin >> a[i];
      sum1+=a[i];
    }

    for(ll i=0 ; i < n ; i++){
      cin >> b[i];
      sum2+=b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    ll res = min((a[0]*n)+sum2,(b[0]*n)+sum1);
    cout << res << endl;
  }

 return 0;
}
