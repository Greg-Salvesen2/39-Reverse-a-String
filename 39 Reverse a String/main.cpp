//
//  main.cpp
//  39 Reverse a String
//
//  Created by Greg Salvesen on 11/15/16.
//  Copyright © 2016 DVS. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    std::cout << "Enter a string that you would like reversed: ";
    
    // Asks the user for a string, and creates a copy to be reversed
    std::string initString = "";
    std::cin >> initString;
    std::string reverseString = initString;
    
    // Starting from the first character, swaps it with the last, and then moves one character in on either side, until they meet in the middle
    for(int i = 0; i < reverseString.size() / 2; i++) {
        std::swap(reverseString[i], reverseString[reverseString.size() - i - 1]);
    }
    
    std::cout << initString << " reversed is " << reverseString << std::endl;
    return 0;
}
