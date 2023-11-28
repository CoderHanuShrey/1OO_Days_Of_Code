#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};

int main() {
    Solution solution;
    
    std::vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 5, 5};
    int newSize = solution.removeDuplicates(nums);

    std::cout << "New size: " << newSize << std::endl;
    std::cout << "Updated vector: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
