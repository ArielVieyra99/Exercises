//
//  main.cpp
//  MyTool
//
//  Created by Ariel Vieyra on 17/09/26.
//

//
//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
//Note that you must do this in-place without making a copy of the array.
//
// 
//
//Example 1:
//
//Input: nums = [0,1,0,3,12]
//Output: [1,3,12,0,0]
//Example 2:
//
//Input: nums = [0]
//Output: [0]
#include <iostream>
#include <vector>
#include <set>

int main () {
    std::vector <int> nums = {0, 0, 0, 7, 8, 9, 4, 6};
    for (std::size_t i = 0, end = nums.size(); i<end;) {
        if (nums[i] == 0) {
            int value = nums[i];
            nums.erase(nums.begin()+i);
            nums.push_back(value);
            --end;
        }
        else
            i++;
    }
    
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i];
    }
    std::cout << "\n";
}
