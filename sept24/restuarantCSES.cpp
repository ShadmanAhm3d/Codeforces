#include <algorithm>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
   int n;cin>>n;

  vector<pair<int,int>> entries;
  for(int i=0; i<n;i++){
    int entry,exit;
    cin >> entry>>exit;

    entries.push_back({entry,1});
    entries.push_back({exit,-1});
  }

  sort(entries.begin(),entries.end());

  int ac = 0;
  int mac =0;

  for(int i=0; i<entries.size();i++){
    ac += entries[i].second;
    mac = max(mac,ac);
  }
  cout << mac << endl;
}


int main(){

    solve();

 return 0;
}
