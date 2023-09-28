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
    ll tc ; cin >> tc ; 
    while(tc--){

    ll a , b ; cin >> a >> b;

    ll x,y,z = 1;
     x =  a ;
     y = a * b ;
     z = a * (b+1)  ;

    if( b == 1){
    cout << "NO" << endl;
    }else{

    cout << "YES" << endl;
    cout << x << " " << y << " " << z << endl;
    }
  }

 return 0;
}

