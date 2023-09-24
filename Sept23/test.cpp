#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
int main() {
  ll tc ; cin >> tc;
  while(tc--){
    ll P ;
  cin >> P;// Change P to the desired value

    for (ll a = 2, b = 3; b <= P; ) {
        ll mod_a = P % a;
        ll mod_b = P % b;

        if (mod_a == mod_b) {
            cout  << a << " " << b << endl;
            break; // Terminate the loop when a valid pair is found
        }

        b++;

        while (mod_b - mod_a < 0) {
            a++;
            mod_a = P % a;
        }
    }

  }
    return 0;
}


