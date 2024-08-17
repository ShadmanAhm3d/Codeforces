#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    typedef long long ll;
    
    ll maxPoints(vector<vector<int>>& points) {
        int m = points.size(), n = points[0].size();
        vector<ll> prev(n);
        
        // Initialize prev with the first row values
        for (int col = 0; col < n; col++) {
            prev[col] = points[0][col];
        }
        
        // Process each row
        for (int i = 1; i < m; i++) {
            vector<ll> curr(n);
            vector<ll> left(n), right(n);
            
            // Fill left array
            left[0] = prev[0];
            for (int j = 1; j < n; j++) {
                left[j] = max(prev[j], left[j - 1] - 1);
            }
            
            // Fill right array
            right[n - 1] = prev[n - 1];
            for (int j = n - 2; j >= 0; j--) {
                right[j] = max(prev[j], right[j + 1] - 1);
            }
            
            // Calculate current row values using left and right arrays
            for (int j = 0; j < n; j++) {
                curr[j] = points[i][j] + max(left[j], right[j]);
            }
            
            // Update prev to the current row values
            prev = curr;
        }
        
        // The answer is the maximum value in the last row
        return *max_element(prev.begin(), prev.end());
    }
};

