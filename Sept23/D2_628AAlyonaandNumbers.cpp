#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
typedef long long ll;
#define pb push_back
using namespace std;
using namespace __gnu_pbds;



 int main(){
        ll n , m ; cin >> n >> m ;
        ll sum = 0;

  //Tn = a + (n-1)d 
  // lets say diff is 5 , a is i the current index ;
  // i + (5n -5)
  // 5n - (5 -i) //lets say i = 3;
  // 5n -2 ;
 // n =  m +( i mod 5)/5
   
        for( ll i=1 ; i <= n ; i++){
                int tempI =  i % 5 ;
                int realI = (m + tempI) / 5;
                sum+= realI;
        }

        cout << sum ;
 return 0;
} 


