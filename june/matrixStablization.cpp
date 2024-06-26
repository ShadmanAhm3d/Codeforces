#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int newArr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int top = i > 0 ? arr[i - 1][j] : 0;
            int bottom = i < n - 1 ? arr[i + 1][j] : 0;
            int right = j < m - 1 ? arr[i][j + 1] : 0;
            int left = j > 0 ? arr[i][j - 1] : 0;

            int curr = arr[i][j];
            if (curr > top && curr > bottom && curr > left && curr > right) {
                int m1 = max(top, bottom);
                int m2 = max(m1, left);
                int m3 = max(m2, right); // m3 is the largest element

                newArr[i][j] = m3;
            } else {
                newArr[i][j] = curr;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}

