#include <algorithm>
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
  int N ;
  cin >> N;
  int Z;
  cin >>Z;

  int arr[N];
  for(int i=0 ; i < N ; i++){
    cin >> arr[i];
  }

  sort(arr,arr+N);
  int cnt = 0;

  for(int i = N ; i >=0; i--){
    if(Z>0){
        arr[i]/=2;
        Z=Z-arr[i];
        cnt++;

    while(arr[i] > arr[i-1]){
        arr[i]/=2;
        Z=Z-arr[i];
        cnt++;

      if(Z < 1) {
        break;
      }
    }
    }
  }

  if(Z>0){
    cout << "Evacuate" <<endl;
  }else{
    cout << cnt << endl;
  }
}


int main(){

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
