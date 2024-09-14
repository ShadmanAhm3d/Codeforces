#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (auto &i : arr)
    cin >> i;

  int p =0 ;
  int j=0;
  int k=0;

  bool found =false;
  for(int i=1 ; i< n-1 ; i++){
    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
      j= i ;
      p =  i-1 ;
      k = i+1;
      found = true;
      break;
    }
  }


  if(found == true){
    cout << "Yes" << endl;
    cout << p+1 << " " << j+1 << " " << k+1 << endl;
  }else{
    cout << "No"<<endl;
  }
  return ;

}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
