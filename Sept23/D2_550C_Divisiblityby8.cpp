#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '8'|| s[i]=='0') {
      cout << "YES\n";
      cout << s[i] <<"\n" ;
      return 0;
    }
  }

  if (s.size() >= 2) {
    for (int i = 0; i < s.size(); i++) {
      for (int j = i + 1; j < s.size(); j++) {
        int num = (s[i] - '0') * 10 + s[j] - '0';
        if (num % 8 == 0) {
          cout << "YES\n";
          cout <<num << endl;
          return 0;
        }
      }
    }
  }

  if (s.size() >= 3) {
    for (int i = 0; i < s.size(); i++) {
      for (int j = i + 1; j < s.size(); j++) {

        for (int k = j + 1; k < s.size(); k++) {
          int num = (s[i] - '0') * 100 + (s[j] - '0')*10 + s[k]-'0';
          if (num % 8 == 0) {
            cout << "YES\n";
          cout <<num << endl;
            return 0;
          }
        }
      }
    }
  }


  cout <<"NO\n";

  
  return 0;
}
