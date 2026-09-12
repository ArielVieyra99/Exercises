#include <iostream>
#include <string>
#include <vector>


int main() {

    //std::cout << "Hello world, this is a program that checaks the longest common prefix" << std::endl;
    std::vector<std::string> words {"apple",
        "application",
        "appetizer",
        "app"};
    std::string commonsub = "";

    //rememer to add on instead of making a new copy: commonsub + "";

    // need way to check wich of the members is the smallest
    int shortestIndex = 0;
    for (int i = 0; i < words.size(); i++) {
        if (words[i].size() < words[shortestIndex].size()) {
            shortestIndex = i;
        }
    }
    for (int i = 0; i < words[shortestIndex].size(); i++) {
        //take the first element of whatever word
        std::cout << "first character of first word: \t" << words[0][i] << std::endl;
        std::cout << "first character of second word \t" << words[1][i] << std::endl;
        std::cout << "first character of third word \t" << words[2][i] << std::endl;
        if (words[0][i] == words[1][i] && words[0][i] == words[2][i]){
            commonsub += words[0][i];
        }
        
    }

    std::cout << "Exited loop \t string is: " << commonsub << std::endl;

    return 0;
}