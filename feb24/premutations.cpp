#include <algorithm>
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
        ll n ;
        cin >> n;
        vector<ll>pos[n+1];

        ll j ;
        ll m = n;
        for(;m--;){
        for(ll i=1 ; i<=n-1 ; i++){
                cin >> j;
                pos[j].push_back(i);
            }
        }

        for(ll i=1 ; i<=n ; i++){
            sort(pos[i].begin(),pos[i].end());
        }
        vector<ll>ans(n+1);

        for(ll i=1 ; i<=n ;i++){
            if(pos[i][n-2]==n-1){
                if(pos[i][0]==n-1){
                    ans[n] = i;
                }else{
                    ans[n-1] = i;
                }
            }else{
                ans[pos[i][n-2]] = i;
            }
        }

        
       for(ll i=1; i<=n; i++){

            cout<<ans[i]<<" ";

        }

        cout<<"\n";

    }


 return 0;
}
