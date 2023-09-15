#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> cardCount;

    // Read the five card values
    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        cardCount[card]++;
    }

    bool isFullHouse = false;

    // Check if there are three cards with the same number and two cards with another same number
    for (const auto &pair : cardCount) {
        if (pair.second == 3 || pair.second == 2) {
            isFullHouse = true;
        } else {
            isFullHouse = false;
            break;
        }
    }

    // Output the result
    if (isFullHouse) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

