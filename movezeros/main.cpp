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
    std::vector <int> nums = {0,1,0,3,12};
    std::cout << nums.size() << std::endl;
    for(int i = 0; i< nums.size(); i++) {
        std::cout << nums[i];
        if(i == nums.size()-1) {
            std::cout << "\n\n";
        }
    }
    nums.erase(nums.begin()+0);
    for(int i = 0; i< nums.size(); i++) {
        std::cout << nums[i];
        if(i== nums.size()-1) {
            std::cout << "\n\n";
        }
    }
    std::cout << nums.size() << std::endl;
    
//    std::set <int> set;
//    int zero_count = 0;
//    for(int y = 0; y < nums.size(); y++) {
//        if(nums[y] == 0) {
//            zero_count++;
//        }
//        else
//            set.insert(nums[y]);
//    }
//    for(int i = 0; i < zero_count; i++) {
//        nums.push_back(0);
//    }
//    for (int j = 0; j < nums.size(); j++) {
//        std::cout << set[j];
//    }
}
