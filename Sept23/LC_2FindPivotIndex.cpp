
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int funcname(vector<int> &arr) {
    int n  = arr.size();
    int ts = 0;
    int csum= 0;
    int lsum  =0 ;
    int rsum = 0 ;
    int returner = 0;
    for(auto i : arr){
      ts+=i;
    }

    for(int i=0 ; i < n ; i++){

      csum +=arr[i];
      lsum = csum - arr[i];
      rsum = ts-csum;

      if(lsum == rsum){
        returner = i;
        break;
      }
    }
    return returner;
  }
};

int main() {
  // Example usage
  vector<int> arr = {-1, -1, -2, -1, -1, 0};
  Solution solution;

  int smthng = solution.funcname(arr);
  cout << smthng;
  return 0;
}
