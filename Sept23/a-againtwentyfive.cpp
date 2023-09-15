#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Initialize the result to 1
    int result = 1;

    // Compute 5^n modulo 100 (to get the last two digits)
    for (long long i = 0; i < n; ++i) {
        result = (result * 5) % 100;
    }

    // Print the last two digits without spaces
    cout << result << endl;

    return 0;
}

