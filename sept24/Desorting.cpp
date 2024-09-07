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
  int arr[n];

  bool sorted = true;



  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i=1;i< n ; i++){
    if(arr[i] < arr[i-1]){
      sorted = false;
    }
  }


  if(sorted == false){
    cout << "0" <<endl;
    return;
  }

  // find minimal gap
  int minGap = INT_MAX;
  for (int i = 1; i < n; i++) {
    int Gap = arr[i] - arr[i-1];
    if(Gap < minGap){
      minGap = Gap;
    }
  }

  cout << (minGap/2)+1 << "\n";
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
