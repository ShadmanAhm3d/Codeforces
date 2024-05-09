
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int y;
        if (x % 2 == 0)
            y = x - 1;
        else
            y = x - 2;

        cout << y << endl;
    }

    return 0;
}
