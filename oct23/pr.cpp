#include <cmath>
#include <cstddef>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define ll  long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
int n ; 

map<int,int>prev_values;


int query(int idx){
  
  if(prev_values.find(idx)!=prev_values.end())
    return prev_values[idx];

  if(idx == 0 || idx ==n+1){
    return INF;
  }

  cout << "? " << idx << endl;
  int value ; cin >> value ;
  return prev_values[idx] = value;
}

int main(){
  cin >> n;

  int l = 0 , r = n+1;

  while(r-l > 1){
    int m = (l+r)/2;
    (query(m-1) > query(m)) ? (l =m ) : (r = m);
  }

  cout << "! " << l << endl;
 return 0;
}
