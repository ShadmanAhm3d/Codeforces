#include <cctype>
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
   string s ;
  cin >> s;
  string res ;
  for(auto i: s){
    i = tolower(i);
    if(!(i =='a'|| i=='e' || i=='i' || i=='o' || i=='u' || i =='y') ){
      res+= i;
    }
  }
  for(auto i: res){
    cout << "." << i;
  }

 return 0;
}
