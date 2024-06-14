#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int x = needle.size();
        int i = 0;
        int j = x - 1;
        while (j < haystack.size()) {
            std::string s = "";
            for (int k = i; k <= j; k++) {
                s += haystack[k];
            }
            if (s == needle) {
                return i;
            }
            i++;
            j++;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    std::string haystack = "sadbutsad";
    std::string needle = "sad";
    
    int result = solution.strStr(haystack, needle);
    
    if (result != -1) {
        std::cout << "The needle '" << needle << "' is found in the haystack '" << haystack << "' at index " << result << std::endl;
    } else {
        std::cout << "The needle '" << needle << "' is not found in the haystack '" << haystack << "'" << std::endl;
    }

    return 0;
}
