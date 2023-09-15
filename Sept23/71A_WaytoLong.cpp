#include <string>
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string s;
        cin >> s;
        int length = s.length();
        string newS;

        if (length > 10) {
            char firstLetter = s[0];
            string middlePart = to_string(length - 2);
            char lastLetter = s[length - 1];

            newS = firstLetter + middlePart + lastLetter;
        } else {
            newS = s; // If the length is not greater than 10, keep the original string.
        }

        cout << newS << endl;
    }

    return 0;
}

