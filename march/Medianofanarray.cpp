#include <algorithm>
#include <cmath>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;


int main(){

  int tc ; cin >> tc;
  while(tc--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    //find median of orignal 
    sort(arr.begin(),arr.end());

    int m = (n+1)/2-1;
    int midx = m;
    
    while(midx <n && arr[midx]==arr[m]){
      midx++;
    }

    cout <<midx-m<<endl;
  }

 return 0;
}
