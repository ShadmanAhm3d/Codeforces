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

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n, 0);
    for (auto &i : arr)
      cin >> i;



    if(n <= k){
      cout << 1 << endl;
      continue;
    }
    vector<int> freq(100, 0);
    for (int i = 0; i < arr.size(); i++) {
      freq[arr[i]]++;
    }
    int maxi =freq[0];
    for (int i = 0; i < freq.size(); i++) {
      maxi = max(maxi, freq[i]);
    }

    if (maxi >= k) {
      cout << k - 1 << endl;
    } else {
      cout << n << endl;
    }
  }

  return 0;
}
