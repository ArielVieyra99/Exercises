#include <iostream>

int main () {

    std::string string = "This is the string 12345 -> ";

    std::cout << string;
    std::string reverseString = "";
    std::cout << "\n This is the string backwards: ";
    for (int i = string.size(); i >= 0; i--) {
        std::cout << string[i];
    }


    return 0;
}