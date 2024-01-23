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
    int h , va , ls;
    cin >> h >> va >> ls;

    while(va > 0 && h > 0 && floor(h/2)+10 < h){
      va--;
      h = floor(h/2)+10;
    }

    if(h <= ls*10){
      cout << "YES"<< endl;
    }else{
    cout << "NO" << endl;
    }

  }

 return 0;
}
