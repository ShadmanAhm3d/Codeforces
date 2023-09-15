#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

vector<int> fib(int n) {
    int ret = 0;
    int pcurr = 0;
    int curr = 1;

    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);

    for (int i = 2; i < n; i++) {
        ret = pcurr + curr;
        ans.push_back(ret);
         pcurr = curr;
        curr = ret;
    }

    return ans;
}
int main(){

  int n ; cin >> n;
   vector<int>ans = fib(n);
  for(int i : ans){
    cout << i << " ";
  }

 return 0;
}
