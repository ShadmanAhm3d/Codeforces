#include <iostream>
using namespace std;

long long sumOfGroup(long long k) {
    // Calculate the first term of the k-th group
    long long firstTerm = 1 + 2 * (k * (k - 1) / 2);

    // Calculate the sum of the k elements in the k-th group
    long long sum = 0;
    for (long long i = 0; i < k; i++) {
        sum += firstTerm + 2 * i;
    }

    return sum;
}

int main() {
    long long k;
    cin >> k;

    long long result = sumOfGroup(k);
    cout << result << endl;

    return 0;
}

