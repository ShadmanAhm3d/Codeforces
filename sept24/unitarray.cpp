
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define IOS                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  int neg= 0;
  int pos = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[i] = x;
    if(arr[i]== -1){
      neg++;
    }else{
      pos++;
    }
  }
  int ans =0 ;

  if(neg%2 == 0 && (pos > neg)){
    cout <<  0  << endl;
    return;
  }

  while( pos < neg){
    pos = pos+1;
    neg=  neg -1;
    ans ++ ;
  }

  if(neg%2!=0)ans++;

  cout << ans << endl;

}

int main() {

  IOS int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
