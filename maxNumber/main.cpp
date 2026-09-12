#include <iostream>

int main () {
    
    std::vector <int> nums {9, 15, 30, 3, 90, 92, 50, 1};
    int max = 0;
    for (int i = 0; i < nums.size(); i ++) {

        if (nums[i] > max) {
            max = nums[i];
        }

    }

    std::cout << "The largest number in list is: " << max;
    
    
    return 0;
}