#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    vector<int> freq(26, 0); // Array to store the frequency of each character
    
    for (char c : s) {
        freq[c - 'A']++;
    }
 
    int oddCount = 0;
    char oddChar = ' ';
    string firstHalf = "";
    string secondHalf = "";
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddChar = char('A' + i);
        }
 
        // Create the first half of the palindrome
        for (int j = 0; j < freq[i] / 2; j++) {
            firstHalf += char('A' + i);
        }
    }
 
    // If there is more than one character with an odd frequency, it's impossible to create a palindrome
    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end()); 
        if (oddCount == 1) {
            cout << firstHalf << oddChar << secondHalf << endl;
        } else {
            cout << firstHalf << secondHalf << endl;
        }
    }
 
    return 0;
}
