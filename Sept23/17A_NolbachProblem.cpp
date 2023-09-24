#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;

// input 27 2
template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n, k;
    cin >> n >> k;

    // Create a vector to store prime numbers
    vector<int> primes;

    // Sieve of Eratosthenes to find prime numbers
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i] == true) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Store prime numbers in the 'primes' vector
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

int ans = 0;
for(int i = 0; i + 1 < primes.size(); i++) {
    int num = 1 + primes[i] + primes[i+1];
    if (num <= n && isPrime[num]) {
        ans++;
    }
}

if (ans >= k) {
    cout << "YES";
} else {
    cout << "NO";
}
    return 0;
}
