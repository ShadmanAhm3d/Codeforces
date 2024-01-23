#include <vector>
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
     ;
      int n, f, a, b;
    cin >> n >> f >> a >> b;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int last = 0;
    
    for (int i = 0; i < n; i++) {
        long long keepOn = 1LL * a * (v[i] - last);
        long long turnOffAndOn = b;
        long long required = min(keepOn, turnOffAndOn);
        
        f -= required;
        last = v[i];
        
        if (f <= 0) {
            cout << "NO" << endl;
        }
    }
    
    cout << "YES" << endl;}

 return 0;
}
