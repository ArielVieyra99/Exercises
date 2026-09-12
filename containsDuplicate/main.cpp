#include <iostream>


int main () {

    std::vector<int> nums = {
        14, 3, 27, 8, 19, 5, 11, 32, 7, 21,
        16, 2, 25, 9, 30, 12, 4, 18, 1, 23};
    bool hasduplicate = false;
    std::unordered_map <int, int> seen;
    
    std::cout << "Hello world!" << std::endl;

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << ", ";
        if (seen.find(nums[i]) != seen.end()) {
            hasduplicate = true;
        }
        seen[nums[i]] = i;

    }
    if (hasduplicate == true) {
        std::cout << "\nDuplicate found!" << std::endl;
    }
    else
        std::cout << "\nNo Duplicate!" << std::endl;

    return 0;
}