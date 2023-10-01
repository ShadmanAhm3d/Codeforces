#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array size is too small!" << endl;
        return -1; // Not enough elements to find the second largest
    }

    int largest = arr[0];
    int secondLargest = INT_MIN; // Initialize to the smallest possible integer

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
        return -1; // No second largest element found
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 20, 15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}

