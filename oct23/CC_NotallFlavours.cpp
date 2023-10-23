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

// attempt 2
/*
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
  ll n, k;
  cin >> n >> k;
  ll arr[n];
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll count = 0;
  ll p = 0;
  set<ll> s;
  for (ll i = 0; i < n; i++) {
    for (ll j = i; j < n; j++) {
      s.insert(arr[j]);
      if (s.size() < k) {
        count++;
        // if j has reached the final element and count has become the size of N ,
        // then there is not a need to further check if the array has more subsegments or not 
        // because we have already found the subsegment 
        if(count == n){
          cout << count  << endl;
           return;
        }
      } else {
        p = max(count, p);
        s.clear();
        count = 0;
        break;
      }
    }
  }

 if(p >= count){
  cout << p  << endl;
  }else{
    cout << count << endl;
  }
}

int main() {

  ll tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
} */
//tc ;
/*
2

6 2

1 1 1 2 2 1

5 3

1 1 2 2 1
*/




//attempt 3 





#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            set<int> s;
            
            for (int j = i; j < n; j++) {
                s.insert(A[j]);
                
                if (s.size() < k) {
                    count = max(count, j - i + 1);
                } else {
                    break;
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}

