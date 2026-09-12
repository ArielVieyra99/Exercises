#include <iostream>
using namespace std;



int main () {


    std::string string = "kayak";
    bool palindrome;

    for (int i = 0; i < string.size()/2; i++) {

        if (string[i] != string [string.size()-1-i]) {
            palindrome = false;
            break;
        }
        else
            palindrome = true;

    }
    std::cout << "String: " << string << endl;

    if (palindrome) {
        std::cout << "Palindrome!" << endl;
    }
    else
    std::cout << "NOT Palindrome!" << endl;





    return 0;
}




// my old code
// int main () {

//     std::string string = "kayak isis kayak";    
//     std::string reverseString = "";
    
//     for (int i = string.size()-1; i >= 0; i--) {
        
//         reverseString += string[i];
//     }
//     std::cout << string << endl;
//     std::cout << reverseString << endl;

//     if (string == reverseString) {
//         std::cout << "Palindrome!" << endl;
//     }
//     else
//         std::cout << "NOT Palindrome!" << endl;


//     return 0;
//}