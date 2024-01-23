#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int k;
  cin >> k;
  if (k == 0) {
    cout << 0;
    return 0;
  }

  vector<int> a(12);

  for (int i = 0; i < 12; ++i) {
    cin >> a[i];
  }

  // Sort the array in decreasing order
  sort(a.rbegin(), a.rend());

  int sum = 0;
  int months = 0;

  for (int i = 0; i < 12; ++i) {
    sum += a[i];
    months++;

    if (sum >= k) {
      cout << months << endl;
      break;
    }
  }

  // If the loop completes without reaching k, print -1
  cout << -1 << endl;

  return 0;
}

