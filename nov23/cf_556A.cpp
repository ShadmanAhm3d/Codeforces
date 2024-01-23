#include <stack>
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

  int n ; cin >> n;
  string s ; cin >> s;


  stack<int>st;

  for(int i=0 ; i < n;i++){
    if(st.empty()){
      st.push(s[i]);
    }else if(!st.empty() && st.top()!=s[i]){
      st.pop();
    }else{
      st.push(s[i]);
    }
  }

  cout << st.size();

 return 0;
}
