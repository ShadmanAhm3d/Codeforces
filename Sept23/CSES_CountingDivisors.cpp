#include <iostream>
#include <vector>

using namespace std;

const int MAX_X = 1000006; // Maximum value of x as mentioned in the constraints

int main() {
    int n;
    cin >> n;

    vector<int> divisors(MAX_X, 0);

    // Precompute the number of divisors for each number from 1 to MAX_X
    for (int i = 1; i < MAX_X; i++) {
        for (int j = i; j < MAX_X; j += i) {
            divisors[j]++;
        }
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << divisors[x] << endl;
    }

    return 0;
}

