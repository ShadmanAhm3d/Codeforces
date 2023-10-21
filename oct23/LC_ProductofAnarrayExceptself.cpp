#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> funcname(vector<int> &nums) {

  int n = nums.size();
    vector<int> ans(n);

    int totalProductSum = 1;

    for (int i = 0; i < n; i++) {
      totalProductSum *= nums[i];
    }

    for (int i = 0; i < n;i++) {
      ans[i] = (totalProductSum >>  nums[i]);
    }

    return ans;
  }
};

int main() {
  // Example usage
  vector<int> arr = {1,2,3,4};
  Solution solution;

  vector<int> smthng = solution.funcname(arr);
  for (auto i : smthng) {
    cout << i << " ";
  }
  return 0;
}
