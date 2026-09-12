#include <iostream>


int main () {

    std::unordered_map <int, int> seen;
    std::vector<int> nums = {
        14, 3, 27, 8, 19, 5, 11, 32, 7, 21,
        16, 2, 25, 9, 30, 12, 4, 18, 1, 23};
    const int target = 10;
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < nums.size(); i ++) {
        std::cout << nums[i];
        std::cout << ", ";
    }
    std::cout << "\n";
    for (int i = 0; i < nums.size(); i++) {

        if (seen.find(complement) != seen.end()) {
            int complement = target - nums[i];
            //return the index/key if you have found the value
            index1 = seen[complement];
            index2 = i;
            break;
            //break?
        }
        else {        
        //if not, then you can just set the value of seen[index]
        seen[nums[i]] = i;

        }

    }
    std::cout << "The indexes from the list that sum to " << target << " are: " << index1 << ", " << index2 << std::endl;




    return 0;
}
