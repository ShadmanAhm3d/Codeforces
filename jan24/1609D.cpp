/* #include <algorithm>
#include <climits>
#include <vector>
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<char> stripes(n);
    for (int i = 0; i < n; i++)
      cin >> stripes[i];
    int counter = 10000;

        if( n ==1 && stripes[0]=='W'){
            //then exit the while loop ;
             ;


        }
    for (int i = 0; i < n; i++) {

      if (stripes[i] == 'B') {

        int localCounter = 0;

        // i want this loop to check only k elements and if somehow it cant
check k elements as in from the last index to the current index there aren't a
total of k elements present then i dont want this loop to execute for (int x =
i; x < min(i + k, n); x++) { if (stripes[x] == 'W') { localCounter++;
          }
        }

        // Update the counter only if enough elements were checked
        if (i + k <= n) {
            counter = min(counter, localCounter);
        }
      }
    }

    cout << counter << endl;
  }

  return 0;
}
*/

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

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;

    int b = 0, w = 0, segment = 0;

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      segment++;
      if (s[i] == 'W')
        w++;
      if (s[i] == 'B')
        b++;

      if (segment >= k) {
        if (s[i - k] == 'B')
          b--;
        if (s[i - k] == 'W')
          w--;

        ans = min(ans, w);
        segment--;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
