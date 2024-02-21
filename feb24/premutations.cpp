#include <iostream>
#include <vector>
using namespace std;

// Define a type alias for long long integers
typedef long long ll;

int main() {
    // Input the value of n
    int n;
    cin >> n;

    // Array to store answers
    ll ans[n + 1];

    // Vector array to store positions
    vector<ll> pos[n + 1];

    // Temporary variable to store input values
    ll j;

    // Outer loop to iterate m times
    int m = n;
    for (; m > 0; m--) {
        // Inner loop to read n - 1 values
        for (int i = 1; i <= n - 1; i++) {
            // Input the value
            cin >> j;

            // Store the position
            pos[j].push_back(i);
        }
    }

    // Output the positions stored
    for (int i = 1; i <= n; i++) {
        cout << "Positions for " << i << ": ";
        for (int j = 0; j < pos[i].size(); j++) {
            cout << pos[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

