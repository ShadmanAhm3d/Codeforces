#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int funcname(vector<int> &nums) {

    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
      int temp = 0;
      for (int k = i; k < nums.size(); k++) {
        temp += nums[k];
        if ((k - i + 1) % 2 == 1) {
          sum += temp;
        }
      }
    }

    return sum;
  }
};

int main() {
  // Example usage
  vector<int> arr = {1, 4, 2, 5, 3};
  // op = 58
  Solution solution;

  int smthng = solution.funcname(arr);
  cout << "blah" << smthng << endl;

  return 0;
}
