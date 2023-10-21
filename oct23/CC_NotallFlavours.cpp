/* #include <set>
#include <stack>
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
    int  n , k ;
  cin >> n >> k ;
  int arr[n];
  stack<int>st;
  for(int i=0 ; i < n ; i++){
    cin>>arr[i];
  }
  for(int i = 0; i<n ; i++){
  st.push(arr[i]);
  }
  // cout << " STACK SIZE " << st.size() <<  " " << endl;
  set<int>s;
  int count = 0;
  int p = 1;
  while(st.size()!=0){
   int temp = st.top();
    st.pop();
   s.insert(temp);
    if(s.size() < k){
     count++; 
     // cout << "COUNT :  " << count << "  " << endl;
    }else{
      p = count;
     // cout << "P :  " << p << "  " << endl;
      count  =1 ;
      s.clear();
    }
  }

  if(count >= p ){
      cout << count <<endl;
  }else{
    cout << p << endl;
  }
}


int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
} */












//attempt 2 

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
     ;
}


int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}



















