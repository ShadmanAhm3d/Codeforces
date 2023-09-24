#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        // Calculate the sum of the first k positive odd integers
        long long sum = 1LL * k * k;

        // Check if n can be represented as the sum of k distinct positive odd integers
        if (n >= sum && n % 2 == k % 2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}

