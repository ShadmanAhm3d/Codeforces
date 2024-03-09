#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int q;
        cin >> q;
        vector<int> ans;
        vector<int> holder;
        bool flag = false;
        while (q--) {
            int elem;
            cin >> elem;
            bool appended = false; // Flag to check if the element is appended

            if (flag == true && !holder.empty()) {
                if((elem > holder.front()) || (elem < holder.front() && elem < holder.back())){
                    ans.push_back(0);
                    appended = true; // Set the flag to true
                } else {
                    ans.push_back(1);
                    holder.push_back(elem);
                    appended = true; // Set the flag to true
                }
            }

            if (!appended && (holder.empty() || elem >= holder.back())) {
                ans.push_back(1);
                holder.push_back(elem);
                appended = true; // Set the flag to true
            } else if (!appended && elem < holder.front()) {
                flag = true;
                holder.push_back(elem);
                ans.push_back(1);
                appended = true; // Set the flag to true
            }
        }

        for (auto i : ans) {
            cout << i;
        }
        cout << endl;
        flag = false;
    }

    return 0;
}

