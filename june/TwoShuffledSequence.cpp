#include <vector>
#include <map>
#include <iostream>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    
    for (auto &i : arr)
        cin >> i;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    vector<int> x;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        x.pb(it->first);
        it->second--;
    }

    vector<int> y;
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        if (it->second > 1) {
            cout << "NO" << endl;
            return;
        }
        if (it->second == 1) {
            y.push_back(it->first);
        }
    }

    // output
    cout << "YES" << endl;
    cout << x.size() << endl;
    for (const auto &i : x)
        cout << i << " ";
    cout << endl;

    cout << y.size() << endl;
    for (const auto &i : y)
        cout << i << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

