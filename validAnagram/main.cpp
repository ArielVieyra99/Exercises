#include <iostream>


int main () {

    //std::cout << "Hello World ! This is a program that test if 2 string are anagrams of eachother" << std::endl;
    std::string word1 = "evil";
    std::string word2 = "live";
    std::unordered_map <char, int> seen;
    std::unordered_map <char, int> seen2;
    bool anagram = false;

    if (word1.size() == word2.size()) {
        
        for (int i = 0; i < word1.size (); i++) {
            
            seen[word1[i]] += 1;
            seen2[word2[i]] += 1;
        }
    
        for (const auto& [character, count] : seen) {
    
            if (seen[character] == seen2[character]) {
                anagram = true;
            }
            else {
                anagram = false;
                break;
            }
        }

    }
    else {
        anagram = false;
    }
if (anagram == true) {

    std::cout << "anagram found!" << std::endl;
}
else{
    std::cout << "anagram not found" << std::endl;
}   


    return 0;
}