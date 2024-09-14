#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
    int n ;cin>>n;
    int arr[n-1] ;
  int ns = 0;
  for(int i=0; i<n-1;i++){
    cin>>arr[i];
    ns+=arr[i];
  }


  cout << (-ns) <<endl;



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
