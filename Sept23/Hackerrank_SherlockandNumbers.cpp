#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        
        long long count = 0;
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
        long long divisor1 = i;
        long long divisor2 = n/i;
                if (divisor1 % 2 == 0) {
                    count++;
                }
        // to avoid perfect square scnarios
                if (divisor1!=divisor2 && (n/i) % 2 == 0) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}

