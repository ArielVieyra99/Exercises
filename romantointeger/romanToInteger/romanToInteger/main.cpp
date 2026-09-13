//
//  main.cpp
//  romanToInteger
//
//  Created by Ariel Vieyra on 13/09/26.
//
//Input: s = "III"
//Output: 3
//Explanation: III = 3.

// I V X L C D M
#include <iostream>

int main() {
    std::string input = "III";
    int output = 0;
    
    int r = 1;
    for (int l = 0;l < input.size(); l ++){
        switch (input[l]) {
            case 'I':
                output = output + 1;
                break;
            case 'X':
                if(input[r] == 'L') {
                    output = output + 40;
                    l++; r++;
                }
                else {
                    output = output + 10;
                }
        }
        r++; //l and r always once per cycle except if 40 found, there is extra in cases
    }
    
    
}
