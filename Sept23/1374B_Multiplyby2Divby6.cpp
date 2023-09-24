#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll cnt = 0;
        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
                cnt++;
            } else {
                n *= 2;
                cnt++;
            }
        }
        if (n != 1) {
            cout << -1 << endl;
        } else {
            cout << cnt << endl;
        }
    }
    return 0;
}

