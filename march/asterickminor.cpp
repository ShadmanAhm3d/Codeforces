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
    string a, b;
    cin >> a >> b;

    if (a[0] == b[0]) {
      cout << "YES" << endl;
      cout << a[0] << "*\n";
      continue;
    } else if (a.back() == b.back()) {
      cout << "YES" << endl;
      cout << "*" << a.back();
      continue;
    }

    int i;

    int f = 0;
    for (i = 0; i < a.size() - 1; i++) {
      for (int k = 0; k < b.size() - 1; k++) {
        if (a[i] == b[k] && a[i + 1] == b[k + 1]) {
          f = 1;
          break;
        }
      }

      if (f == 1) {
        break;
      }
    }

    if (f == 1) {
      cout << "YES" << endl;
      cout << "*" << a[i] << a[i + 1] << "*" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
    int m = (n/2)+1;
    bool flag = true;
    while(1){
      if(arr[m]>arr[m-1]&&arr[m]>=arr[m+1]){
        break;
      }else{
        sort(arr.begin(),arr.end());
      }
    }

