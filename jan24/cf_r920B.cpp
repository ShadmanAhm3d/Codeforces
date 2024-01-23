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
    int n ; cin >> n;
    string s; cin >> s;
    string f ; cin >> f;

    int add =0;
    int remve = 0;
    for(int i=0; i < n ; i++){
      if(s[i]=='0' && f[i]=='1'){
        remve++;
      }else if(s[i]=='1' && f[i]=='0'){
        add++;
      }
    }

    int ans = max(add,remve);
    cout << ans << endl;
  }


 return 0;
}
