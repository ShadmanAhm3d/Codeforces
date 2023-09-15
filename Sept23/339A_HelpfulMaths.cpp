#include <algorithm>
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

template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
  string s;
  cin >> s;
  /*
   int c1 =0 ,c2=0 ,c3=0;
for(int i=0; i < s.size();i+=2){
 if(s[i] == '1')c1++;
 if(s[i] == '2')c2++;
 if(s[i] == '3')c3++;
}
string t;
for(int i=0 ; i< c1;i++)t+="1+";
for(int i=0 ; i< c2;i++)t+="2+";
for(int i=0 ; i< c3;i++)t+="3+";

t.pop_back();
cout << t ; */

  string t;
  for (int i = 0; i < s.size(); i += 2) {
    t += s[i];
  }

  sort(t.begin(), t.end());

  for (int i = 0; i < t.size() - 1; i++) {
    cout << t[i] << "+";
  }
  cout << t.back();

  return 0;
}
