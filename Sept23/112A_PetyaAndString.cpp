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
   
  //first
     string s ;
  //second
  string z ; 
  cin >> s ;
  cin >> z;

  // Convert s and z to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(z.begin(), z.end(), z.begin(), ::tolower);
  if(s == z){
    cout << "0" << endl;
  }else if(s > z){
    cout << "1" <<endl;
  }else{
    cout << "-1" <<endl;
  }

 return 0;

}
