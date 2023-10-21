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

bool ask(int x, int y ){
  cout << "? " << x << " " <<y <<endl;
  string s ;
  cin >> s;
  return (s=="YES");
}


int main(){

  int side,height,base;
  int l = 0 ; int r =1001;
  int half_side =0;
  while(r-l>1){
    int mid = l+(r-l)/2;
    if(ask(mid,0)){
      half_side=mid;
      l=mid;
    }else{
      r =mid;
    }

  }

  side = 2*(half_side);

  l = 0 ;r =1001;
  int half_base =0;
  while(r-l>1){
    int mid = l+(r-l)/2;
    if(ask(mid,side)){
      half_base=mid;
      l=mid;
    }else{
      r =mid;
    }
  }

  base= 2*(half_base);
  
  l = 0 ;r =1001;
  while(r-l>1){
    int mid = l+(r-l)/2;
    if(ask(mid,side)){
      half_base=mid;
      l=mid;
      height = mid;
    }else{
      r =mid;
    }
  }



  int areaTriangle = ((height-side)*base)/2;
  int areaSquare =  side*side;


  cout << "! " <<areaTriangle+areaSquare << endl;
  

 return 0;
}
