#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
  int n;cin>>n;
  vector<int>arr(n,0);
  for(auto &i : arr)cin>>i;

  sort(arr.begin(),arr.end());

  int mx = 0;
  for(int i=1;i<n;i++){
    int x = arr[i] - arr[i-1];
    mx+=x;
  }
  cout << mx << endl;

}


int main(){

  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
