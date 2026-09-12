#include <iostream>

int main () {

    //return index of the character that appears exactly once

    std::string s = "abcabcabc";
    std::unordered_map <char, int> seen;
    int index = -1;
    std::cout << "string is: " <<s << std::endl;
    for (int i = 0; i < s.size();i ++) {
        //check if shown
        seen[s[i]] += 1;
        //std::cout << "character: " << string[i] << " \t count: " << seen[string[i]] << std::endl;

    }

    for (int i = 0; i < s.size(); i++) {
        if (seen[s[i]] == 1) {
            index = i;
            break;
        }
    } 
    std::cout << s << std::endl;
    std::cout << "the index is " << index << std::endl;




    return 0;
}