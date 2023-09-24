#include <cstdlib>
#include <vector>
#include <iostream>

class Solution {
public:
    int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
        int passcntr = 0;
        for (auto i : arr1) {
            for (auto k : arr2) {
                if (abs(i - k) <= d) {
                    passcntr++;  // Increment passcntr for each valid element
                    break;  // No need to check further for this element in arr2
                }
            }
        }
        return arr1.size() - passcntr;
    }
};

int main() {
    Solution solution;
    
    // Example usage:
    std::vector<int> arr1 = {4, 5, 8};
    std::vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;
    
    int result = solution.findTheDistanceValue(arr1, arr2, d);
    
    std::cout << "Distance Value: " << result << std::endl;
    
    return 0;
}
