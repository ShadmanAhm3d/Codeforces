#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int p = 0;
    int count = 0;
    for (int i = 0; i < b.size(); ++i) {
      if (a[p] == b[i]) {
        count++;
        p++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
