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
   
  ll n , m , a;
  cin >> n >> m >> a;
  
  ll cols  = (n /a ) + ( n % a != 0);
  ll rows  = (m /a )+ ( m % a != 0);

  cout << rows * cols;





 return 0;
}
