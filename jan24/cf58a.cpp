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

  string word;
  cin >> word;
  string comp = "hello";

  int j = 0;
  int pass = 0;
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == comp[j]) {
      j++;
      pass++;
    }
  }

    if(pass==5)cout<<"YES";
    else cout<<"NO";

  return 0;
}
