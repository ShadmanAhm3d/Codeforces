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

void solve(){
    int n , m , k  ;
    cin>>n>>m>>k;

    set<pair<int,int>>st;

    for(int i=0; i<k ; i++){
    int x,y;
    cin >>x >> y;
    st.insert({x,y});
  }

  int cnt =0;

  for(auto it = st.begin() ; it!=st.end() ; it++){
     int x = it->first;
     int y = it->second;

     if(st.find({x+1,y})==st.end()){cnt++;}
     if(st.find({x-1,y})==st.end()){cnt++;}
     if(st.find({x,y+1})==st.end()){cnt++;}
     if(st.find({x,y-1})==st.end()){cnt++;}

  }

  cout <<cnt << endl;
}


int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
