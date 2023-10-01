#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  bool finder(int checkpls, const vector<int> &arr) {
    int sum1 = 0; // Initialize sum1 and sum2 to zero
    int sum2 = 0;
    int n = arr.size();

    for (int i = 0; i < checkpls; i++) {
      sum1 = abs(sum1+ arr[i]);
    }
    for (int i = checkpls + 1; i < n; i++) {
      sum2 = abs(sum2+ arr[i]);
    }

    return sum1 == sum2;
  }

  int funcname(vector<int> &arr) {

    int low = 0;
    int right = *max_element(arr.begin(), arr.end());
    int mid;

    while (right - low > 1) {
      mid = (low + right) / 2;
      if (finder(mid, arr)) {
        low = mid;
      } else {
        right = mid;
      }
    }


       // Check if a valid pivot was found
    if (finder(low, arr)) {
      return low ; // Return the pivot index
    } else if (low == 0 && finder(0, arr)) {
      return 0; // Special case for pivot index at the left edge
    } else {
      return -1; // No valid pivot index found
    }
  }
};

int main() {
  // Example usage
  vector<int> arr = {-1, -1, 2, -1, -1, 0};
  Solution solution;

  int smthng = solution.funcname(arr);
  cout << smthng;
  return 0;
}
