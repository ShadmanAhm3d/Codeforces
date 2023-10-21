#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int funcname(vector<int> &arr) {

  // Disable synchronization between C and C++ standard streams for faster I/O
    ios_base::sync_with_stdio(false);

    // Untie cin from cout for faster input reading
    cin.tie(NULL);

    int low = 0; // low index of the array
    int high = arr.size() - 1; // high index of the array

    // Perform binary search until low and high pointers converge
    while (low < high) {
        // Calculate the middle index of the current search range
        int mid = low + (high - low) / 2;

        // Check if the middle element is smaller than the element to its right
        if (arr[mid] < arr[mid + 1]) {
            // If it is, move the low pointer to the right of the middle element
            low = mid + 1;
        }
        // Check if the middle element is larger than the element to its right
        else if (arr[mid] > arr[mid + 1]) {
            // If it is, move the high pointer to the middle element
            // Since the middle element is already larger than the next one, it might be a potential peak
            high = mid;
        }
    }

    // When the while loop exits, low and high will be pointing to the same index,
    // which is the potential peak element
    return low; // Return the index of the peak element }
};

int main() {
  // Example usage
  vector<int> arr = {0, 10, 5, 2};
  Solution solution;

  int smthng = solution.funcname(arr);
  cout << "blah" << smthng << endl;

  return 0;
}
