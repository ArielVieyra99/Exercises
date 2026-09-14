//
//  main.cpp
//  ValidParenthesis
//
//  Created by Ariel Vieyra on 13/09/26.
//

//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//
//An input string is valid if:
//
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.
//Every close bracket has a corresponding open bracket of the same type.
//


#include <iostream>

int main() {
    std::string input = "()[]{}}";
    int par = 0, sqr = 0, curl = 0;
    bool validparenthesis;
    
    for (const char& ch : input) {
        if (ch == '(' || ch == ')') {
            par++;
        }
        if (ch == '[' || ch == ']') {
            sqr++;
        }
        if (ch == '{'|| ch == '}') {
            curl++;
        }
        if(par%2 == 0 && sqr%2 ==0 && curl%2 == 0) {
            validparenthesis = true;
        }
        else
            validparenthesis = false;
    }
    std::cout <<std::boolalpha << validparenthesis <<std::endl;
    
}
