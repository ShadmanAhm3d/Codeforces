#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
int n, m, T, k;

int main() {
    cin >> T; // Read the number of test cases
    while (T--) {
        cin >> n >> k; // Read the length of the string 'n' and parameter 'k'
        char s[105];
        scanf("%s", s + 1); // Read the string 's' (starting from index 1)

        // Check if k*2 is equal to n, if yes, it's impossible to split the string
        if (k * 2 >= n) {
            puts("NO"); // Print "NO" and continue to the next test case
            continue;
        }

        int flag = 0; // Initialize a flag to check if we need to print "NO"

        // Check if the first 'k' characters are not equal to the last 'k' characters
        for (int i = 1; i <= k; i++) {
            if (s[i] != s[n - i + 1]) {
                puts("NO"); // Print "NO" and set the flag to 1
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            puts("YES"); // If flag is still 0, print "YES"
        }
    }


  return 0;
}

