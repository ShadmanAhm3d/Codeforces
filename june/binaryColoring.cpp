#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {

  int x;
  cin >> x;
  // 1 0 0 1 1  -> 1 1 0 0 1
  vector<int> bits(32, 0);

  for (int i = 31; i >= 0; i--) {
    // 0 0 0 0 0 0 0
    bits[i] = x % 2;
    x = x / 2;
  }

  for (int i = 31; i >= 1; i--) {
    if (bits[i] == 1 and bits[i - 1] == 1) {
      //  0 1 1 1
      //        +
      // remove current i with with -1
      int leftPointer = i - 1;
      int rightPointer = i;
      while (bits[leftPointer] != 0)
        leftPointer--;
      bits[rightPointer] = -1;
      bits[leftPointer] = 1;
      bits[i] = -1;
      for (int i = leftPointer + 1; i < rightPointer; i++)
        bits[i] = 0;
    }
  }

  // now just reverse the bit

  /* int l = 0; int r = 31;
  while(l <= r){
    int temp = bits[l];
    bits[l] = bits[r];
    bits[r] = bits[temp];
    l++;
    r--;
  } */

  reverse(bits.begin(), bits.end());
  cout << 32 << endl;
  for (auto &i : bits)
    cout << i << " ";
}
int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
