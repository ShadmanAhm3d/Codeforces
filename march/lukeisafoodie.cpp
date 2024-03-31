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

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    int n, x;
    cin >> n >> x;

    
    vector<int>karr(n);
    vector<pair<int,int>>arr(n);

    for(int i=0;i<n;i++){
      cin>>karr[i];
      arr[i].first = karr[i]-x;
      if(arr[i].first<0) arr[i].first = 0;
      arr[i].second = karr[i]+x;
    }

    int count =0;
    int l = arr[0].first;
    int r = arr[0].second;
    for(int i=1 ;i <n;i++){
      if(arr[i].first > r || arr[i].second < l){
        count++;
        l = arr[i].first;
        r = arr[i].second;
      }else{
        l = max(l,arr[i].first);
        r = min(r,arr[i].second);
      }
    }
    cout << count << endl;

  }

  return 0;
}
