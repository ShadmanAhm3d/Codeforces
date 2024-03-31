#include <unordered_map>
#include <vector>
#include <iostream>
#include <algorithm>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        int m;
        cin >> m;
        unordered_map<int, int> init;
        vector<int> ans;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int elem;
            cin >> elem;
            init[elem]++;
        }
        m--;
        while (m--) {
            int nx;
            cin >> nx;
            for (int i = 0; i < nx; i++) {
                int key;
                cin >> key;
                if (init.find(key) != init.end()) {
                    // Increase the second value if key is found
                    init[key]++;
                } else {
                    // Else just insert it and increase its value
                    init[key] = 1;
                }
            }

            // Traverse map and find elements with count less than 2
            for (auto it = init.begin(); it != init.end(); it++) {
                if (it->second < 2)
                    ans.push_back(it->first);
            }
            // Erase elements with count less than 2
            init.erase(remove_if(init.begin(), init.end(), [](const pair<int, int>& p) { return p.second < 2; }), init.end());
        }

        // If init map size is zero or has no elements then print -1 as answer
        if (init.empty() || ans.empty())
            cout << -1 << endl;
        else {
            // Print the remaining elements in the ans vector
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

