#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;
int upperBoundBinarySearch(const vector<int> arr, int target) {
    int left = 0;
    int right = arr.size()-1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid+1  ;
        } else {
            right = mid;
        }
    }

    return left;
}

int LowerBoundBinarySearch(const vector<int> arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            right = mid ;
        } else {
            left = mid+ 1;
        }
    }

    return left;
}
int main() {
    vector<int> vec = {1, 3, 5,5,5,5,5,5,5, 7, 9, 11};
    int target = 5;

    int upperBound = upperBoundBinarySearch(vec, target);
    int lowerBound = LowerBoundBinarySearch(vec, target);

    cout << "Upper Bound of " << target << " is at index " << upperBound-1 << endl;

    cout << "Lower Bound of " << target << " is at index " << lowerBound << endl;
    return 0;
}

