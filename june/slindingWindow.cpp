#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
   vector<int>arr = {1,2,3,4,5,6};
  cout << "ARRAY SIZE : " << arr.size() << endl;
   int wS =0 ;
   int low = 0 ;
   int high = 0;
   int k=3;
  int res =0;

   /* for(int high=0; high<arr.size(); high++){
    wS+=arr[high];
    if(high-low+1 == k){
      res = max(res,wS);
      wS= wS-arr[low];
      low++;
    }
  } */
int ws =0;
  for(int i=0; i< k; i++){
    ws +=arr[i];
  }

  int mx = 0;
  for(int i=k; i < arr.size() ;i++){
    ws+=arr[i];
    ws = ws - arr[i-k];
    mx = max(mx,ws);
  }

  cout <<  mx<< endl;
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
