#include <bits/stdc++.h>
#include <iostream>
#include <vector>

std::vector<int> separateDigits(int number) {
    std::vector<int> digits;
    
    // Handle the case of a single-digit number
    if (number == 0) {
        digits.push_back(0);
        return digits;
    }
    
    // Extract digits and add them to the vector
    while (number > 0) {
        int digit = number % 10;
        digits.push_back(digit);
        number /= 10;
    }
    
    // Reverse the vector to get digits in the correct order
    
    return digits;
}

int main() {
    int number ; std::cin >>number ;
    if(number < 10 ){
        std::cout << number;
        return 0;
    }
    number = number -1 ;
    std::vector<int> digits = separateDigits(number);
    
    // Print the separated digits
    long long product  = 1 ;
    for (int digit : digits) {
          product *= digit;
    }

  std::cout << product;
    
    return 0;
}

