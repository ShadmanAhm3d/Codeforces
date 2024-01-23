#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 14, 11, 15, 6};
    int n = v.size();
    int k;
    cin >> k;

    sort(v.begin(), v.end());

    int low = 0;
    int high = v[n - 1] - v[0];

    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;
        int left = 0;

        // Count how many pairs have a difference less than or equal to mid
        for (int right = 0; right < n; ++right) {
            while (v[right] - v[left] > mid) {
                left++;
            }
            count += right - left;
        }

        if (count < k) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    cout << low;
    return 0;
}

