/* #pragma GCC optimize("O3")
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


bool funci(vector<int>&v){
  for(int i=0 ; i< v.size() -1 ; i++){
    if(v[i] >= v[i+1]) return true;
  }

  return false;
}


void solve(){

  vector<int>v(4);
  for(int i=0 ; i < v.size() ; i++){
     cin >>v[i];
  }

  int count =0 ;
  while(funci(v)){
  int l = 0 ,r  = v.size()-1;
    while(r - l > 1){
      int mid = (l + r) / 2;
    if(v[mid] > v[mid+1]){
      v[mid]/=2;
      r= mid;
      count++;
    }else{
      l = mid+1;
    }
  }
  }

  for(auto i : v){
    cout << i  << " ";
  }
cout << endl << count ;
}


int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
} */

#include <vector>
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
  int n;
  cin >> n;
  vector<int> arr(n);

  for (auto &i : arr)
    cin >> i;

  int count = 0;

  for (int i = n - 2; i >= 0; i--) {

    while (arr[i] >= arr[i + 1] && arr[i] > 0) {
      arr[i] /= 2;
      count++;
    }

    if (arr[i] == arr[i + 1]) {

      cout << -1 << endl;
      return ;
    }
  }

  cout << count << endl;
}

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
