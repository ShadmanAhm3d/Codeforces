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

  // inp 
  // this is somthingssss string 
  // int n  
  // char s  ;



  cout << "ENter n " << endl;
  int n ; cin >> n;
  cout << "ENter S " << endl;
  char s ; cin >> s ;
  cout << "ENter the string " << endl;
  string st ; cin >> st;
  


  int count = 0;

  int restarter = 0;
  for(int i=0 ; i < st.length() ; i++){
    if(st[i] == s ){
      count++;
    }

    if(count == n){

      restarter = i;
      break;
    }
  }


  for(int i=restarter+1; i < st.length() ; i++){
    cout << st[i];
  }





 return 0;
}
