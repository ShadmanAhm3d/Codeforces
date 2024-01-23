#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

/* class Solution {
public:
   bool checkIfExist(vector<int>& nums) {

    for(int i=0 ; i < nums.size() ; i++){
      for(int k=0 ; k < nums.size(); k++){
        if(i!=k){
          if(nums[i] == (2*nums[k])){
           return true;
        }
        }
      }
    }

    return false;
   }
}; */

class Solution {
public:
  bool funcname(vector<int> &nums) {

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      int target = (nums[i] * 2);
      int x = 0;
      if (nums[i] == 0) {
        x = binary_search(nums.begin() + i + 1, nums.end(), target);
      } else {
        x = binary_search(nums.begin(), nums.end(), target);
      }

      if (x) {
        return true;
      }
    }

    return false;
  }
};

int main() {
  // Example usage
  int n = 4;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  Solution solution;

  bool smthng = solution.funcname(arr);
  if (smthng) {
    cout << "TRUEE hai bhai";
  } else {
    cout << "untree hai bhai";
  }

  return 0;
}
