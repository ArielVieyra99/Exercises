#include <iostream>

int main () {

    std::vector <int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;
    for (int ii = 0; ii < nums.size(); ii++) {
        std::cout << nums[ii];
    }

    for (int i = 0; i < nums.size(); i++) {

        if ((nums[i])% 2) {
            count ++;
        }
    }

    std::cout << "The amount of EVEN  numbers in the list are: " << count;



    return 0;
}