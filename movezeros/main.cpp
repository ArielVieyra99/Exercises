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
    std::vector <int> nums = {1,2,3,3 ,4,5,6};
    
    for (int i = 0; i< nums.size(); i++) {
        if (nums[i] == 3) {
            nums.push_back(nums[i]);
            nums.erase(nums.begin()+i);
        }
    }
    std::cout << "\n";
    
    for (int y = 0; y < nums.size(); y++) {
        std::cout <<nums[y];
        if (y == nums.size()-1) {
            std::cout <<"\n";
        }
    }
}
