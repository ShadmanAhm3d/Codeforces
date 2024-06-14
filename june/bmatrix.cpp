#include <vector>
#include <iostream>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {
    vector<vector<int>> vec(5, vector<int>(5, 0));
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            int x;
            cin >> x;
            vec[i][k] = x;
        }
    }

    int x = -1, y = -1;
    for (int i = 0; i < 5; i++) { 
        for (int k = 0; k < 5; k++) {
            if (vec[i][k] == 1) {
                x = i;
                y = k;
            }
        }
    }

    int count = 0;

    if (x != 2) {
        while (x > 2) {
            x--;
            count++;
        }
        while (x < 2) {
            x++;
            count++;
        }
    }
    if (y != 2) { 
        while (y < 2) {
            y++;
            count++;
        }
        while (y > 2) { 
            y--;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

