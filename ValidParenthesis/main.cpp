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
//(])[
int main() {
    std::string input = "{([]})";
    std::stack<char> brackets;
    bool validparenthesis = true;
    int i = 0;
    
    for (const char& ch : input) {
        
        std::cout << ch << std::endl;
        if (ch == '(' || ch == '[' || ch == '{') {
            if(i = input.size()-1) {
                validparenthesis = false;
            }
            brackets.push(ch);
        }
        if (ch == ')' || ch == ']' || ch == '}') {
            if (brackets.empty()) {
                validparenthesis = false;
                break;
            }
            char top = brackets.top();
            if (top == '(') {
                if (ch == ')') {
                    brackets.pop();
                    validparenthesis = true;
                }
                else
                    validparenthesis = false;
            }
            if (top == '[') {
                if (ch == ']') {
                    brackets.pop();
                    validparenthesis = true;
                }
                else
                    validparenthesis = false;
            }
            if (top == '{') {
                if (ch == '}') {
                    brackets.pop();
                    validparenthesis = true;
                }
                else
                    validparenthesis = false;
            }
        }
        i++;
    
    }
    if (brackets.empty()!= true) {
        validparenthesis = false;
    }
    std::cout <<std::boolalpha << validparenthesis <<std::endl;
    
}
