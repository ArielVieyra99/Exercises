#include <iostream>
#include <vector>

//Given:
// a = {1, 3, 5}
// b = {2, 4, 6}
// Return:
// {1, 2, 3, 4, 5, 6}
// Pattern learned:
// Two pointers
// Foundation for merge sort


int main() {

    std::vector<int> nums1 {1,2,3,0,0,0};
    std::vector<int> nums2 {2,5,6};
    int m = nums1.size();
    int n = nums2.size();
    int counter1 = 0;
    int counter2 = 0;


    for (int i = 0; i <= n + m -1; i ++) {
        if(nums1[counter1])
        if (nums1[counter1] == nums2[i] || nums1[counter1] < nums2[i]) {
            nums1.emplace(nums1.begin()+counter1 + 1, nums2[i]);
        }
        
        counter1++;

    }
    for (int i = 0; i < nums1.size(); i++) {
        std::cout << nums1[i] << ", ";
    }
    std::cout << std::endl;


    return 0;
}