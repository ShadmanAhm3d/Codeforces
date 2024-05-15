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
    string s ;cin>>s;
    int n = s.length();

    bool isUnique = true;
    int cut = 0;
    for(int i=0; i < n; ){
      if(s[i]=='0'){
        cut++;
        while(s[i]=='0' && i < n){
          i++;
        }
        if(i!=n){
          isUnique = false;
        }

        //kya main akhri index pe hu ?? ? 
      }else if(s[i]=='1'){
        cut++;
        while(s[i]=='1' && i < n){
          i++;
        }
      }
    }

    /* for(int i=1; i< n ;i++){
      if(s[i]!=s[i-1]){
        isUnique = false;
        break;
      }
    } */

    if(isUnique == false){
      cut--;
    }

    cout << cut << "\n";

  }

 return 0;
}
