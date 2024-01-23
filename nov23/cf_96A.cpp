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

  string arr;
  cin >> arr;

  int count = 1;
  for (int i = 1; i < arr.length(); i++) {
    if (arr[i] == arr[i - 1]) {
      count++;
      if (count == 7) {
        break;
      }
    } else {
      count=1;
    }
  }

  if (count == 7) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
