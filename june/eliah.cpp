#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
  int n ;cin >> n;;
  vector<int>arr(2*n,0);
  for(auto &i : arr) cin >> i;

  sort(arr.begin(),arr.end());

  if(arr[0] == arr[2*n-1]){
    cout << -1 << endl;
    return ;
  }
  for(int i=0; i < 2*n ; i++){
    cout << arr[i] << " ";
  }

}


int main(){

  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

    solve();

 return 0;
}
